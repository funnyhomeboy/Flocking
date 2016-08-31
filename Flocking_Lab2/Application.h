#pragma once
#include <SFML/Graphics.hpp>
#include "Triangle.h"


class Application
{
public:

	Triangle* tri;
	sf::RenderWindow window;

	void run();
	void handleInput();
	void render();

	Application();
	~Application();
};

