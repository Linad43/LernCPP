#include "Main.h"

void ex1() {
	std::cout << "1. �������" << std::endl;
	int hour;
	while (1) {
		std::cout << "�������, ������� ���: ";
		std::cin >> hour;
		if (hour > 0 && hour <= 24) {
			break;
		}
		else {
			std::cout << "������� ��������� ������!\n��������� �������� ������ ���� � ��������� (0;24]\n";
		}
	}
	int i = 0;
	while (++i <= hour) {
		std::cout << "��-��\n";
	}
}