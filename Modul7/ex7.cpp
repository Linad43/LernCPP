#include "Main.h"

void ex7() {
	std::cout << "7. ��������������*.\n";
	int countBacter, countAnti;
	while (1) {
		std::cout << "������� ���-�� ��������: ";
		std::cin >> countBacter;
		if (countBacter < 0) {
			std::cout << "���-�� �������� �� ����� ���� �������������\n";
			continue;
		}
		break;
	}
	while (1) {
		std::cout << "������� ���-�� �����������: ";
		std::cin >> countAnti;
		if (countAnti < 0) {
			std::cout << "���-�� ����������� �� ����� ���� �������������\n";
			continue;
		}
		break;
	}
	for (int i = 0; countBacter >= 0 && (countAnti * 10 - i*countAnti) >= 0; countBacter = (countBacter * 2) - (countAnti * 10 - i++*countAnti))
	{
		std::cout << "����� " << i << " ���� �������� �������� " << countBacter << "\n";
	}
}