
#include <Fistnite.h>

class Test : public Fistnite::Application
{
public:
	Test()
	{

	}

	~Test()
	{

	}
};

int main()
{
	Test* test = new Test();
	test->Run();
	delete test;
}