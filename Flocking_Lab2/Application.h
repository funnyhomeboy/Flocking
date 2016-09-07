#pragma once
#include <SFML/Graphics.hpp>
#include "TriangleBoid.h"
#include "InputHandler.h"
#include <vector>

class Application
{
private: 
	sf::Clock clock;
	sf::Time timeFinal, timeInitial;
	sf::Uint64 inputStates;
public:

	std::vector<TriangleBoid> boidVector;
	sf::RenderWindow window;

	InputHandler inputHandler;
	float deltaTime;

	void run();
	void update();
	void render();
	void getDeltaTime();

	Application();
	~Application();
};

