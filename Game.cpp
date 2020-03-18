#include "Game.h"

Game::Game() : _window(sf::VideoMode(800, 600), "Plateformer 0.1")
{
	
}

void Game::init()
{
	
	
}


void Game::run(int frame_per_seconds)
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time TimePerFrame = sf::seconds(1.f / frame_per_seconds);

	while (_window.isOpen())
	{
		processEvents();
		bool repaint = false;
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > TimePerFrame)
		{
			timeSinceLastUpdate -= TimePerFrame;
			repaint = true;
			update(TimePerFrame);
		}
		if (repaint)
			render();
	}

}

void Game::runWithFixedTimeSteps(int frame_per_seconds)
{
}

void Game::runWithVariableTimeSteps()
{
}

void Game::runWithMinimumTimeSteps(int minimum_frame_per_seconds)
{
}

void Game::processEvents()
{

	sf::Event event;
	while (_window.pollEvent(event)) {
		if ((event.type == sf::Event::Closed)
			or ((event.type == sf::Event::KeyPressed) and (event.key.code
				== sf::Keyboard::Escape))) {
			_window.close();
		}
	}
}

void Game::update()
{
}

void Game::update(sf::Time deltaTime)
{
}

void Game::render()
{

	_window.clear();
	_window.draw(_player);
	_window.display();
}
