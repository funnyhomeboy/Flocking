#pragma once
#include <map>
class Application;

class InputHandler
{
private:
	Application* app;
public:
	std::map<bool, bool> keyStateMap;
	void handleInput();
	InputHandler(Application* app);
	~InputHandler();
};

