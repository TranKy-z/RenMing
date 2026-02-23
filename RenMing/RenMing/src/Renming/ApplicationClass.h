#pragma once
#include "Core.h"

namespace Renming {


	class RENMING_API ApplicationClass
	{
	public:
		ApplicationClass();
		virtual ~ApplicationClass();

		void Run();
	};

	//to be defined in CLIENT 
	ApplicationClass* CreateApplication();
}
