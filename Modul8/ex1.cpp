#include "Main.h"
#define MIN 0.0
#define MAX 10000.0
#define MININT 0
#define MAXINT 100

void ex1() {
	float m, f;
	int t, choise;
	while (1)
	{
		std::cout << "1. Космический симулятор.\n";
		std::cout << "	1. Ручной ввод\n";
		std::cout << "	2. Случайные значения для массы, силы тяги и времени\n";
		std::cin >> choise;
		if (choise == 1) {
			/*while (1)
			{
				std::cout << "Ваш звездолет какой массы? ";
				std::cin >> m;
				if (m <= 0) {
					std::cout << "Масса звездолета должна быть выше нуля\n";
					continue;
				}
				break;
			}*/
			//Функция описана в файле ..\CoopFunc\CreateVar.cpp
			m = createFloat(1, "Ваш звездолет какой массы? ");
			std::cout << "включает двигатель с силой тяги... ";
			std::cin >> f;
			/*while (1)
			{
				std::cout << "на какое время? ";
				std::cin >> t;
				if (t < 0) {
					std::cout << "Расчет не может производиться при отрицательном времени\n";
					continue;
				}
				break;
			}*/
			t = createFloat(0, "на какое время? ");
			break;
		}
		else if (choise == 2) {
			m = random((float)MIN, (float)MAX);
			f = random((float)MIN, (float)MAX);
			t = random((int)MININT, (int)MAXINT);
			std::cout << "Ваш звездолет массой " << m << " килограмм\n";
			std::cout << "включает двигатель с силой тяги " << f << " ньютонов на " << t << " секунд.\n";
			break;
		}
		else {
			std::cout << "Некорректное значение\n";
		}
	}
	float s = ((f / m) * t * t) / 2;
	std::cout << "Расстояние которое преодолеет корабль " << s << " метров\n";

}