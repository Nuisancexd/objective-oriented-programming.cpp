#include <iostream>

class Vec
{
private:
	int length;
public:
	Vec() : length(0) { }
	friend int print_length(Vec);
};

int print_length(Vec v) // имеет доступ к закрытым членам - переменным и функциям.
{
	v.length += 10;
	return v.length;
}

int main()
{
	Vec v;
	std::cout << "Length of vector: " << print_length(v) << std::endl;

	return 0;
}