#include "Main.h"

void ex5() {
	std::cout << "5. ��������� �����\n";

	int a, b;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> a;
	std::cout << "������� ������ �����:" << std::endl;
	std::cin >> b;
	if (a % b == 0) {
		std::cout << "��! ������ ����� " << a << " ������� �� ������ " << b << " ��� �������" << std::endl;
	}
	else {
		std::cout << "���! ������ ����� " << a << " �� ������� �� ������ " << b << " ��� �������" << std::endl;
	}
}