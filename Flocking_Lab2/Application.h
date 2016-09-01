#pragma once
#include <SFML/Graphics.hpp>
#include "TriangleBoid.h"
#include <vector>

class Application
{
public:

	std::vector<TriangleBoid> boidVector;
	sf::RenderWindow window;

	void run();
	void handleInput();
	void update();
	void render();

	Application();
	~Application();
};

