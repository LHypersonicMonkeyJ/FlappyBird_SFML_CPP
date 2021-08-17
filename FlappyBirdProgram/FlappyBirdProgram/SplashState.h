#pragma once

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace ljdiscovery
{
	class SplashState : public State
	{
	public:
		SplashState(GameDataRef data);

		void Init();

		void HandleInput();
		void Update(float dt); // time difference between frames
		void Draw(float dt);

	private:
		GameDataRef _data;

		sf::Clock _clock;
		sf::Sprite _background;
	};
}