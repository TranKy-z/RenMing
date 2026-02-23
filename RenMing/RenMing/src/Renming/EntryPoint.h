#pragma once
#include "ApplicationClass.h"

#ifdef RMG_PLATFORM_WINDOWS

extern Renming::ApplicationClass* Renming::CreateApplication();

int main(int argc, char** argv) {
	//Sandbox* sandman = new Sandbox();
	printf("Renming Engine rulessss");
	auto app = Renming::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif