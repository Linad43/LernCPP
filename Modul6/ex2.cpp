#include "Main.h"

void ex2() {
	std::cout << "2. Слишком большие чиcла" << std::endl;
	int num, lenthNum = 0;
	std::cout << "Введите число: ";
	std::cin >> num;
	do {
		num /= 10;
		lenthNum++;
	} while (num != 0);
	std::cout << "Цифр в числе: " << lenthNum << std::endl;
}