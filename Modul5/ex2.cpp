#include "Main.h"

void ex2() {
	std::cout << "2. �������!" << std::endl;
	std::cout << "������� ����� ���" << std::endl;

	int day;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == 6 || day % 7 == 0 || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "������ ��������" << std::endl;
		}
		else {
			std::cout << "������ �������" << std::endl;
		}
	}
	else {
		std::cout << "������ �����" << std::endl;
	}
}