#include "Main.h"

void ex2() {
	std::cout << "2. ������� ������� ��c��" << std::endl;
	int num, lenthNum = 0;
	std::cout << "������� �����: ";
	std::cin >> num;
	do {
		num /= 10;
		lenthNum++;
	} while (num != 0);
	std::cout << "���� � �����: " << lenthNum << std::endl;
}