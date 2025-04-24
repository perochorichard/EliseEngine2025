#include <Elise.h>

class Sandbox : public Elise::Application {
public:
	Sandbox() {
	}
	~Sandbox() {

	}

};

Elise::Application* Elise::CreateApplication() {
	return new Sandbox();
}