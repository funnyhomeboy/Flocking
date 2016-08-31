#include "Application.h"

using namespace sf;


Application::Application() 
	:	window(VideoMode(1024, 768), "SFML")		
{
	tri = new Triangle(sf::Vector2f(100.f, 100.f));
}


Application::~Application()
{
	delete tri;
}


void Application::run()
{
	while (window.isOpen())
	{
		handleInput();
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

void Application::render()
{
	window.clear();
	window.draw(*tri);
	window.display();
}