#include "Main.h"

void ex1() {
	std::cout << "1. ����� ����������" << std::endl;
	int speed, height;
	std::cout << "������� �������� ������" << std::endl;
	std::cin >> speed;
	std::cout << "������� ������ ������" << std::endl;
	std::cin >> height;
	if (speed >= 750 && speed <= 850 && height >= 9000 && height <= 9500) {
		std::cout << "����� ����������" << std::endl;
	}
	else {
		std::cout << "���������� ������������� ������" << std::endl;
	}
}