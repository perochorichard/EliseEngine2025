#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern Elise::Application* Elise::CreateApplication(); 

int main(int argc, char** argv) {
	auto app = Elise::CreateApplication();
	app->Run();
	delete app;
}

#endif