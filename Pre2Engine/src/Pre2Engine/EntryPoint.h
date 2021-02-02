#pragma once

#ifdef P2E_PLATFORM_WINDOWS

extern Pre2Engine::Application* Pre2Engine::CreateApplication();

int main(int argc, char** argv)
{
	printf("Pre2Engine");
	auto app = Pre2Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif
