#include <iostream>
#include <string>

class Clown // abstract(interface) class
{
private:
	int id;
	std::string color;
public:
	void get_id()
	{
		std::cin >> id;
		std::getline(std::cin, color);
		std::cout << "id: " << id << " color: " << color << std::endl;
	}
	virtual void emotions() = 0;
	virtual void emotions(char *str1, char *str2) = 0;
};

class Happy :public Clown
{
public:
	void emotions()
	{
		std::cout << "default override" << std::endl;
	}
	void emotions(char* str1, char* str2)
	{
		std::cout << str1 << std::endl;
		std::cout << str2 << std::endl;
	}
};

class Saddest :public Clown
{
public:
	void emotions()
	{
		std::cout << "default override" << std::endl;
	}
	void emotions(char* str1, char* str2)
	{
		std::cout << str1 << std::endl;
		std::cout << str2 << std::endl;
	}
};


int main()
{
	Happy hppy;
	Saddest sddst;

	std::cout << "Happy. Enter ur ID_CLOWN and COLOR_CLOWN" << std::endl;
	hppy.get_id();
	std::cout << "Saddest. Enter ur ID_CLOWN and COLOR_CLOWN" << std::endl;
	sddst.get_id();

	hppy.emotions();
	sddst.emotions();
	return 0;
}



/*
class Interface // abstract(interface) class
{
public:
	virtual void show() = 0;
};

class Derived :public Interface
{
public:
	void show()
	{
		std::cout << "Implementation of Virtual Function in Derived Class";
	}
};

int main()
{
	Interface* i;
	Derived d;
	i = &d;
	i->show();

	return 0;
}
*/