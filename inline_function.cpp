#include <iostream>

inline float mul(float x, float y)
{
	return x * y;
}
inline double div(double a, double b)
{
	return a / b;
}

int main()
{
	float num1 = 16.338;
	float num2 = 7.52;

	std::cout << mul(num1, num2) << std::endl;
	std::cout << div(num1, num2);
	return 0;
}