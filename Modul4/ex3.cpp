#include "Main.h"

void ex3() {
	std::cout << "3. �������� �� ������ �����\n";
	int a;
	std::cout << "������� �����: " << std::endl;
	std::cin >> a;
	if (a % 2 == 0) {
		std::cout << "����� " << a << " - ������" << std::endl;
	}
	else {
		std::cout << "����� " << a << " - ��������" << std::endl;
	}
}