#include <Renming.h>

class Sandbox : public Renming::ApplicationClass
{
public:
	Sandbox() {

	}
	~Sandbox() {

	}


};
int main() {
	Sandbox* sandman = new Sandbox();
	sandman->Run();
	delete sandman;
	return 0;
}