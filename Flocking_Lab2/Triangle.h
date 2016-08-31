#pragma once
#include <SFML/Graphics.hpp>


class Triangle : public sf::ConvexShape
{
private:
	float size;
public:
	Triangle(sf::Vector2f tipPoint);
	~Triangle();
};

