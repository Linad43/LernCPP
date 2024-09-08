#include "Main.h"
#define AMERICANO_WATER 300
#define LATTE_WATER 30
#define LATTE_MILK 270

void ex2() {
	std::cout << "2. ����������.\n";
	int water, milk, choise, countLatte, countAmericano;
	std::cout << "������� ���������� ���� � ��: ";
	std::cin >> water;
	std::cout << "������� ���������� ������ � ��: ";
	std::cin >> milk;
	countLatte = countAmericano = 0;
	while (water >= AMERICANO_WATER || water >= LATTE_WATER && milk >= LATTE_MILK) {
		std::cout << "�������� ������� (1 - ���������, 2 - �����): ";
		std::cin >> choise;
		switch (choise)
		{
		case 1:
			if (water < AMERICANO_WATER) {
				std::cout << "������������ ����\n";
				break;
			}
			std::cout << "��� ������� �����\n";
			countAmericano++;
			water -= AMERICANO_WATER;
			break;
		case 2:
			if (water < LATTE_WATER) {
				std::cout << "������������ ����\n";
				break;
			}
			if (milk < LATTE_MILK) {
				std::cout << "������������ ������\n";
				break;
			}
			std::cout << "��� ������� �����\n";
			countLatte++;
			water -= LATTE_WATER;
			milk -= LATTE_MILK;
			break;
		default:
			std::cout << "�������� �� ���������� ��������, ���������� �����\n";
			break;
		}
	}
	std::cout << "***�����***\n";
	std::cout << "������������ ��������:\n";
	std::cout << "\t����: " << water << " ��\n";
	std::cout << "\t������: " << milk << " ��\n";
	std::cout << "������ ��������� ������������: " << countAmericano << "\n";
	std::cout << "������ ����� ������������: " << countLatte << "\n";
}