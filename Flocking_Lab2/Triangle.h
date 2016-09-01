#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Triangle : public sf::ConvexShape, public GameObject
{
private:
	float size;
public:
	Triangle(sf::Vector2f tipPoint, float size = 25.0f);
	~Triangle();
};

