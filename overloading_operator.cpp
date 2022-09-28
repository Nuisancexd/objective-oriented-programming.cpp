#include <iostream>

class Val
{
	int x, y;
public:
	Val()
	{
		x = 23;
		y = 36;
	}
	void display()
	{
		std::cout << std::endl << "x = " << x << std::endl << "y = " << y << std::endl;
	}
	int operator-() // перегрузка оператора
	{ //унарный -
		x = -x; y = -y;
		return x, y;
	}
	int operator++()
	{ //префиксный декремент
		return x++, y++;
	}
};


int main()
{
	Val v;
	std::cout << "Values before operator Overloading";
	v.display();
	std::cout << "After operator Overloading";
	-v;
	v.display();
	++v;
	v.display();
	return 0;
}