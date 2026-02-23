#include <Renming.h>

class Sandbox : public Renming::ApplicationClass
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}


};

Renming::ApplicationClass* Renming::CreateApplication() {
	return new Sandbox();
}