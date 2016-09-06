#include "TriangleBoid.h"



void TriangleBoid::draw()
{
	this->app
}

void TriangleBoid::update()
{
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

}


TriangleBoid::~TriangleBoid()
{
}
