#pragma once
#include "Triangle.h"


class TriangleBoid : public Triangle
{
private:
	sf::Vector2f position;
	sf::Vector2f velocity;
	float orientation;

public:
	sf::CircleShape comfortZone;

	void draw();
	void update();

	TriangleBoid(Application* app, sf::Vector2f origin, float size = 16.0f);
	~TriangleBoid();
};

