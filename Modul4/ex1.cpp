#include "Main.h"

void ex1() {
	std::cout << "1. ������� �� ���� �����\n";
	double a, b;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;

	if (a > b) {
		std::cout << "������ ����� ������: " << b << std::endl;
	}
	else if (b > a) {
		std::cout << "������ ����� ������: " << a << std::endl;
	}
	else {
		std::cout << "���� �����: " << a << std::endl;
	}
}