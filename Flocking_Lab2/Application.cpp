#include "Application.h"

using namespace sf;


Application::Application() : window(VideoMode(1024, 768), "SFML")		
{
	boidVector.emplace_back(TriangleBoid(sf::Vector2f(100.f, 100.f), 100.f));
}


Application::~Application()
{
}


void Application::run()
{

	while (window.isOpen())
	{
		handleInput();
		update();
		render();
	}
}

void Application::handleInput()
{
	Event ev;
	while (window.pollEvent(ev))
	{
		switch (ev.type)
		{
		case Event::Closed:
			window.close();
		default:
			break;
		}
	}
}

void Application::update()
{
	for (auto& boid : boidVector)
	{
		boid.update();
	}
}

void Application::render()
{
	window.clear();
	
	for (auto& boid : boidVector)
	{
		boid.draw();
	}
	
	window.display();
}