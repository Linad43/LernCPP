#include "Main.h"

void ex6() {
	std::cout << "6. ������� ��������\n";

	int mansCount;
	int barbersCount;

	std::cout << "***���������-�����������***" << std::endl;
	std::cout << "������� ����� ������ � ������: " << std::endl;
	std::cin >> mansCount;

	std::cout << "������� ��� �������� ������� ������?" << std::endl;
	std::cin >> barbersCount;

	int mansPerDay = mansCount / 30;
	int mansPerBarber = 8;
	int mansPerBarbePerMonth = mansPerBarber * 30;
	std::cout << "���� ������ ������� " << mansPerBarbePerMonth << " � �����" << std::endl;
	int requiredBarberCount = mansCount / mansPerBarbePerMonth;
	if (mansCount % mansPerBarbePerMonth != 0) {
		requiredBarberCount++;
	}
	std::cout << "����������� ����� ��������: " << requiredBarberCount << std::endl;

	std::cout << requiredBarberCount << " ������� ����� �������� " <<
		requiredBarberCount * mansPerBarbePerMonth << " ������ �� �����" << std::endl;
	if (requiredBarberCount > barbersCount) {
		std::cout << "����� ������ ��������!!!" << std::endl;
	}
	else {
		std::cout << "�������� �������." << std::endl;
	}
}