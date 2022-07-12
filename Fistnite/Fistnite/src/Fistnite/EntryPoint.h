
#pragma once

//Entry point

#ifdef FN_PLATFORM_WINDOWS

extern Fistnite::Application* Fistnite::CreateApplication();

int main(int argc, char** argv)
{
	Fistnite::Log::Init();
	FN_CORE_WARN("Initialised Logger (O^O)");
	FN_INFO("Henlo");

	auto app = Fistnite::CreateApplication();
	app->Run();
	delete app;
}

#endif 



