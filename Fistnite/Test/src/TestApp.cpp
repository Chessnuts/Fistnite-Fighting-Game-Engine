
#include <Fistnite.h>

class TestApp : public Fistnite::Application
{
public:
	TestApp()
	{

	}

	~TestApp()
	{

	}
};

Fistnite::Application* Fistnite::CreateApplication()
{
	return new TestApp();
}