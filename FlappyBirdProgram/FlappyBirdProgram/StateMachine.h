#pragma once

#include <memory>
#include <stack>
#include "State.h"

namespace ljdiscovery
{
	typedef std::unique_ptr<State> StateRef; //unique pointer to a state

	class StateMachine
	{
	public:
		StateMachine() {}
		~StateMachine() {}

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();

		void ProcessStateChanges();

		StateRef &GetActiveState();

	private:
		std::stack<StateRef> _states;
		StateRef _newState; // latest state to add

		bool _isRemoving; // track state
		bool _isAdding;
		bool _isReplacing;
	};
}

