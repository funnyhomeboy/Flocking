#pragma once
class Application;

class GameObject
{
public:
	Application* app;

	virtual void draw() = 0;
	virtual void update(float deltaTime) = 0;

	GameObject();
	virtual ~GameObject();
};

