#include "TriangleBoid.h"
#include "Application.h"


void TriangleBoid::draw()
{
	this->app->window.draw(this->comfortZone);
	this->app->window.draw(*this);
	this->app->window.draw(this->directionPointer);
}

void TriangleBoid::update()
{
	velocity -= {0, 0};
	this->move(velocity);
	this->comfortZone.move(velocity);
	this->directionPointer.move(velocity);
}

TriangleBoid::TriangleBoid(Application* app, sf::Vector2f origin, float size) : Triangle(origin, size)
{
	this->app = app;

	this->position = sf::Vector2f(	(getPoint(0).x + getPoint(1).x + getPoint(2).x) / 3, 
									(getPoint(0).y + getPoint(1).y + getPoint(2).y) / 3);

	this->comfortZone.setRadius(size/2);
	this->comfortZone.setOrigin(comfortZone.getRadius(), comfortZone.getRadius());
	this->comfortZone.setPosition(sf::Vector2f(this->position.x, this->position.y-(size/8)));
	this->comfortZone.setFillColor(sf::Color::Transparent);
	this->comfortZone.setOutlineColor(sf::Color::Green);
	this->comfortZone.setOutlineThickness(2);

	this->directionPointer.setSize(sf::Vector2f(2, 16));
	this->directionPointer.setOrigin(1, 8);
	this->directionPointer.setRotation(this->getRotation());
	this->directionPointer.setFillColor(sf::Color::White);
	this->directionPointer.setPosition(sf::Vector2f(this->position.x, this->position.y - (size * 3/4)));

}


TriangleBoid::~TriangleBoid()
{
}
