#include "Main.h"

void ex4() {
	std::cout << "4. ����������� �����\n";

	double exp;
	std::cout << "������� ����� ����� �����: " << std::endl;
	std::cin >> exp;
	if (exp < 0) {
		std::cout << "������ �����, ���� �� ����� ���� �������������!" << std::endl;
	}
	else if (exp >= 0 && exp < 1000) {
		std::cout << "��� �������: 1" << std::endl;
	}
	else if (exp >= 1000 && exp < 2500) {
		std::cout << "��� �������: 2" << std::endl;
	}
	else if (exp >= 2500 && exp < 5000) {
		std::cout << "��� �������: 3" << std::endl;
	}
	else {
		std::cout << "��� �������: 4" << std::endl;
	}
}