#pragma once

#include "Core.h"

namespace Elise {
	
	class ELISE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}
