#pragma once
#include "Triangle.h"


class TriangleBoid : public Triangle
{
private:
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
	float orientation;

public:
	sf::CircleShape comfortZone;

	void draw() override;
	void update(float dt) override;

	TriangleBoid(Application* app, sf::Vector2f origin, float size = 16.0f);
	~TriangleBoid();
};

