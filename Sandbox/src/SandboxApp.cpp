#include <Pre2Engine.h>


class Sandbox : public Pre2Engine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Pre2Engine::Application* Pre2Engine::CreateApplication()
{
	return new Sandbox();
}