#include "Application.h"

using namespace sf;


Application::Application() : window(VideoMode(1024, 768), "SFML"), inputHandler(this)
{
	boidVector.emplace_back((TriangleBoid(this, sf::Vector2f(100.f, 100.f), 32.f)));
	inputStates = 0; 
}


Application::~Application()
{

}

void Application::run()
{

	while (window.isOpen())
	{
		timeInitial = clock.getElapsedTime();
		inputHandler.handleInput();
		update();
		render();		
	}
}

void Application::getDeltaTime()
{
	timeFinal = clock.getElapsedTime();
	deltaTime = timeFinal.asSeconds() - timeInitial.asSeconds();
	//Cap our frame to 1/60 of a second, in case latency becomes an issue.
	if (deltaTime > 1 / 60.f)
		deltaTime = 1 / 60.f;
	printf("%f\n", deltaTime);
}

void Application::update()
{
	for (auto& boid : boidVector)
	{
		boid.update(deltaTime);
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