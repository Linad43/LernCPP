#include "Main.h"
#define MID '!'
#define ALL '~'

void printMidKolon(int countSum, int countMid, char mid, char all) {
	for (int i = 0; i < (countSum - countMid); i++) {
		if (i == (countSum - countMid) / 2) {
			for (int j = 0; j < countMid; j++) {
				std::cout << mid;
			}
		}
		std::cout << all;
	}
	if (countSum == countMid) {
		for (int i = 0; i < countMid; i++)
			std::cout << mid;
	}
	std::cout << '\n';
}

void ex6() {
	std::cout << "6. ������ ����������.\n";
	int countSum, countMid;
	while (1) {
		while (1) {
			std::cout << "������� ����� ����� �����������: ";
			std::cin >> countSum;
			if (countSum <= 0) {
				std::cout << "����� ����������� �� ����� ���� ������������� ��� ������ ����\n";
				continue;
			}
			else break;
		}
		while (1) {
			std::cout << "������� ���-�� ��������������� ������: ";
			std::cin >> countMid;
			if (countMid < 0) {
				std::cout << "���-�� ��������������� ������ �� ����� ���� �������������\n";
				continue;
			}
			else break;
		}
		if (countMid > countSum) {
			std::cout << "���-�� ��������������� ������ �� ����� ���� ������ ����� ������\n";
			continue;
		}
		printMidKolon(countSum, countMid, MID, ALL);
		break;
	}
}