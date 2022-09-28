#include <iostream>


class Motor
{
public:
	Motor()
	{
		std::cout << "This is motor" << std::endl;
	}
};

class Cylinders
{
public:
	Cylinders()
	{
		std::cout << "motor having 6 cylinders" << std::endl;
	}
};

class Fare:public Motor
{
public:
	Fare()
	{
		std::cout << "Fare of motor" << std::endl;
	}
};

class Car:public Motor, public Cylinders { }; //множественное наследование

class Bus:public Motor { }; // иерархического наследования

class MiniBus:public Bus { }; // многоуровневое наследование

class Motorbike :public Motor, public Fare { }; // гибридное наследование

int main()
{
	Car obj1;
	Bus obj2;
	MiniBus obj3;
	Motorbike obj4;
	return 0;
}