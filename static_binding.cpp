#include <iostream>

class TestS
{
	int code;
	static int count;

public:
	void set_code(void)
	{
		code = ++count;
	}
	void show_code(void)
	{
		std::cout << "Object member: " << code << std::endl;
	}
	static void show_count(void)
	{
		std::cout << "Count: " << count << std::endl;
	}
};

int TestS::count;

int main()
{
	TestS t1, t2;
	t1.set_code();
	t2.set_code();

	TestS::show_count();

	TestS t3;
	t3.set_code();
	TestS::show_count();

	t1.show_code();
	t2.show_code();
	t3.show_code();

	return 0;
}