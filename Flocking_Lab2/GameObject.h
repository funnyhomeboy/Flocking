#pragma once
class Application;

class GameObject
{
public:
	Application* app;

	GameObject();
	virtual ~GameObject();
};

