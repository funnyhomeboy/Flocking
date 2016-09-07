#pragma once
#include "Triangle.h"


class TriangleBoid : public Triangle
{
private:
	
	float mass;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f acceleration;
	float orientation;

public:
	sf::CircleShape comfortZone;
	sf::RectangleShape directionPointer;

	void moveTo(sf::Vector2f point);
	void pointTo(sf::Vector2f point);

	void draw() override;
	void update(float dt) override;

	TriangleBoid(Application* app, sf::Vector2f origin, float size = 16.0f);
	~TriangleBoid();
};

