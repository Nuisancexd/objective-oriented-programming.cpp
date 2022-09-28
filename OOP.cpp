//create for urslelf clown
//mini game with oop

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>


class Clown
{
public:
	std::string name_of_clown;
public:

	Clown()
	{ 
		std::cout << "Добро пожаловать в мини игру 'головоломка', реализованного на ооп." << std::endl;
		std::cout << "Назовите вашего клоуна: ";
		std::getline(std::cin, name_of_clown);
		std::cout << "Hello " << name_of_clown << std::endl;
		std::cout << "Вам предстоит выбрать правильный ответ головоломки, но помните, что у вас 3 жизни.";
	}
};


class GameGolovolomka : public Clown
{
private:
	int score;
	int answer;
	int life;
public:

	GameGolovolomka() : score(0), life(3) { }

	void game()
	{
		std::cout << "У Олиной мамы пять дочек: Вика, Аня, Марта, Кира... Как зовут пятую?" << std::endl;
		std::cout << "1:Таня, 2:Оля, 3:Рита, 4:Соня" << std::endl;
		std::cout << "Выберите верный номер" << std::endl;
		answer = 2;
		for (;;)
		{
			int urchoice;
			std::cin >> urchoice;
			if (answer == urchoice)
			{
				score++;
				std::cout << "Верно! " << "Ваш счет: " << score << " Количество жизней: " << life << std::endl;
				break;
			}
			else if (life > 0)
			{
				life--;
				if (life == 0)
				{
					std::cout << "У вас кончились жизни!" << std::endl;
					break;
				}
				std::cout << "Неверно, осталось жизней: " << life << std::endl;
			}
		}
		if (life > 0) 
		{
			std::cout << "Отлично, следующий раунд! Ваш счет: " << score << ", Количество жизней: " << life << std::endl;
		}
		else
		{
			std::cout << "Вы проиграли, ваш счет: " << score << std::endl;
		}
		if (score == 1)
		{
			std::cout << "Вы прошли все уровни. Ваш счет: " << score << std::endl;
		}
	}
	void safe_score();
};

void GameGolovolomka::safe_score()
{
	std::ofstream fout;
	fout.open("pazzle.txt", std::ios::app);
	if (fout.is_open())
	{
		fout << "Счет: " << score << " ~ " << name_of_clown << std::endl;
		std::cout << "Счет успешно сохранен.";
	}
	else
	{
		std::cout << "Не удалось сохранить счет:(";
	}
	fout.close();
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	GameGolovolomka gg;
	gg.game();

	std::cout << "Хотите сохранить счет? "
		<< "да(1) или нет(0)" << std::endl;
	int choice;
	std::cin >> choice;
	if (choice == 1)
	{
		gg.safe_score();
	}
	else
	{
		std::cout << "Ваш счет не сохранен.";
	}
	return 0;
}
