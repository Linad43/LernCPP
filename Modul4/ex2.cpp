#include "Main.h"

void ex2() {
	std::cout << "2. ���������� � ���" << std::endl;
	double a, b, sum;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;
	std::cout << "������� �� �����:" << std::endl;
	std::cin >> sum;
	if (sum == a + b) {
		std::cout << "�����!" << std::endl;
	}
	else {
		std::cout << "������, ������ ���������: " << a + b << std::endl;
	}
}