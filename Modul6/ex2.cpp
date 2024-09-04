#include "Main.h"

void ex2() {
	std::cout << "2. —лишком большие чиcла" << std::endl;
	int num, lenthNum = 0;
	std::cout << "¬ведите число: ";
	std::cin >> num;
	do {
		num /= 10;
		lenthNum++;
	} while (num != 0);
	std::cout << "÷ифр в числе: " << lenthNum << std::endl;
}