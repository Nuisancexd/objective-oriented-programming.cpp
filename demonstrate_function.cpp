#include <iostream>
#include <string>


class Clown
{
private: //сокрытие данных
	std::string name; // поле класса
	std::string color;
	int number;
public:
	Clown() : number(0) //конструктор без аргументов, инициализация number
	{ }
	Clown(std::string n, std::string c) : name(n), color(c) // конструктор с аргументами
	{ }
	void inc_num() // метод класса
	{
		number++;
	}
	void get_clown(std::string n, std::string c)
	{
		name = n;
		color = c;
	}
	void show_clown()
	{
		std::cout << "num: " << number << " ~ name: " << name << ", color: " << color << std::endl;
	}
	void get_clown_color();

};

void Clown::get_clown_color() // перегрузка операций
{
	int urnum;
	std::cout << "Position of name clown: ";
	std::cin >> urnum;
	if (urnum == number)
	{
		std::cout << "name of clown: " << name << std::endl;
	}
	else
	{
		std::cout << "name of clown undefind.";
	}
}

int main()
{
	Clown clown;
	clown.inc_num();
	clown.get_clown("Red", "angry");
	clown.show_clown();
	clown.inc_num();
	clown.get_clown("Purple", "relax");
	clown.show_clown();

	clown.get_clown_color();

	return 0;
}