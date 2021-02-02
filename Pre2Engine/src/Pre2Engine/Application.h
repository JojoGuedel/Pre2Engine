#pragma once

#include "Core.h"

namespace Pre2Engine
{
	class P2E_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

