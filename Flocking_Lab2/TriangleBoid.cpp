#include "TriangleBoid.h"
#include "Application.h"


void TriangleBoid::moveTo(sf::Vector2f point)
{
	//Set the orientation of the boid to be pointing in the direction where it needs to move.
	pointTo(point);

	//Move the boid one step in the direction of the point given.

}

void TriangleBoid::pointTo(sf::Vector2f point)
{
	//Set the orientation of the boid in accordance to the point given.
	sf::Vector3f newOrientation;
//	newOrientation = point - this->position;
	

}

void TriangleBoid::draw()
{
	this->app->window.draw(this->comfortZone);
	this->app->window.draw(*this);
}

void TriangleBoid::update(float dt)
{
	
}

TriangleBoid::TriangleBoid(Application* app, sf::Vector2f origin, float size) : Triangle(origin, size)
{
	this->app = app;
	this->mass = size;

	this->position = sf::Vector2f(	(getPoint(0).x + getPoint(1).x + getPoint(2).x) / 3, 
									(getPoint(0).y + getPoint(1).y + getPoint(2).y) / 3);

	this->comfortZone.setRadius(size/2);
	this->comfortZone.setOrigin(comfortZone.getRadius(), comfortZone.getRadius());
	this->comfortZone.setPosition(sf::Vector2f(this->position.x, this->position.y-(size/8)));
	this->comfortZone.setFillColor(sf::Color::Transparent);
	this->comfortZone.setOutlineColor(sf::Color::Green);
	this->comfortZone.setOutlineThickness(2);

	this->velocity = { 0, 0 };
	this->acceleration = { 0,0 };

	this->orientation = 0;

	this->setRotation(orientation);

}


TriangleBoid::~TriangleBoid()
{
}
