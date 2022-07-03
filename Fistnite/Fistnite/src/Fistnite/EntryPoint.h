
#pragma once

//Entry point

#ifdef FN_PLATFORM_WINDOWS

extern Fistnite::Application* Fistnite::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Fistnite::CreateApplication();
	app->Run();
	delete app;
}

#endif 
