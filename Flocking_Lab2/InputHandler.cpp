#include "InputHandler.h"
#include "Application.h"


void InputHandler::handleInput()
{
	sf::Event ev;
	while (this->app->window.pollEvent(ev))
	{
		switch (ev.type)
		{
		case sf::Event::Closed:
			this->app->window.close();
			break;
		}
	}
	


}

InputHandler::InputHandler(Application* app)
{
	this->app = app;
}


InputHandler::~InputHandler()
{
}
