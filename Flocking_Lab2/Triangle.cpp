#include "Triangle.h"



Triangle::Triangle(sf::Vector2f tipPoint, float size)
{
	this->size = size;

	this->setPointCount(3);
	this->setPoint(0, tipPoint);
	this->setPoint(1, sf::Vector2f(tipPoint.x - size / 3, tipPoint.y + size));
	this->setPoint(2, sf::Vector2f(tipPoint.x + size / 3, tipPoint.y + size));
	this->setFillColor(sf::Color::Red);

}


Triangle::~Triangle()
{
}
