
#pragma once

#include "Core.h"

namespace Fistnite
{
	class FISTNITE_API Application
	{
	private:

	public:
		//constructor
		Application();
		//destructor
		virtual ~Application();

		//run application
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
