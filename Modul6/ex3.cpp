#include "Main.h"

void ex3() {
	std::cout << "3. ����������" << std::endl;
	int moneyBank, moneyPerson;
	char person[20];
	std::cout << "������� ��� ��������: ";
	std::cin >> person;
	std::cout << "������� ����� �����: ";
	std::cin >> moneyBank;
	if (moneyBank < 0) {
		std::cout << "���� �� ����� ���� �������������\n";
		return;
	}
	moneyBank = -moneyBank;
	while (moneyBank < 0) {
		std::cout << "��� ���� �����: " << -moneyBank << std::endl;
		std::cout << "������� ���� ����� " << person << ": ";
		std::cin >> moneyPerson;
		if (moneyPerson < 0) {
			std::cout << "�� �� ������ ����� � ���� � �����, ���� ��������� ���������\n";
			continue;
		}
		moneyBank += moneyPerson;
	}
	std::cout << "�����������, �� ��������� �������� ����, �� ����� �����: " << moneyBank << std::endl;
}