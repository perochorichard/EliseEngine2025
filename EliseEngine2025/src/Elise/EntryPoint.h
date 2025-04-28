#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern Elise::Application* Elise::CreateApplication(); 

int main(int argc, char** argv) {
	Elise::Log::Init();
	EL_CORE_WARN("Elise Engine Startup");
	EL_INFO("Application Startup");


	auto app = Elise::CreateApplication();
	app->Run();
	delete app;
}

#endif