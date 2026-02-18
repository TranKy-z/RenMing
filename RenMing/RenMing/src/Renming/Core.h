#pragma once

#ifdef RMG_PLATFORM_WINDOWS
	#ifdef RMG_BUILD_DLL
		#define RENMING_API __declspec(dllexport)
	#else
		#define RENMING_API __declspec(dllimport)
	#endif
#else
	#error Renming only support Windows!
#endif