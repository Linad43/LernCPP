#include "Main.h"
#define PART_DRIVER 0.25
#define PART_FUEL 0.2
#define PART_REPAIR 0.2
#define PART_TAXES 0.2

void ex1() {
	std::cout << "1. ��������� ���������.\n";

	std::string stoping[] =	{ 
		"������", 
		"������", 
		"������", 
		"���������" 
	};
	int countClient = 0;
	int sumMoney = 0;
	int cost = 20;
	for (int i = 0; i < size(stoping); i++) {
		std::cout << "��������� �� ���������: ";
		std::cout << stoping[i] << std::endl;
		int passOut = 0;
		if (i == 0) {
			std::cout << "��� ������ ���������, ������� ����\n";
		}
		else if (i != size(stoping) - 1) {
			std::cout << "������� ���������� ����� �� ���������?\n";
			std::cin >> passOut;
		}
		int passIn = 0;
		if (i != size(stoping) - 1) {
			std::cout << "������� ���������� ����� �� ���������?\n";
			std::cin >> passIn;
		}
		else {
			std::cout << "��� �������� ���������, ��� ��������� �����\n";
		}

		sumMoney += passIn * cost;
		if (i != size(stoping) - 1) {
			std::cout << "������������ � ��������� ";
			std::cout << stoping[i] << ". ";
			countClient += passIn - passOut;
			std::cout << "���������� � ��������: ";
			std::cout << countClient << std::endl;
		}
		else {
			std::cout << "������� ��������\n";
		}
	}

	//����
	int salaryDriver = sumMoney * PART_DRIVER;
	int costFuel = sumMoney * PART_FUEL;
	int taxes = sumMoney * PART_TAXES;
	int costRepair = sumMoney * PART_REPAIR;
	int result = sumMoney - (salaryDriver + costFuel + taxes + costRepair);
	std::cout << "����� ���������� " << sumMoney << std::endl;
	std::cout << "�������� �������� " << salaryDriver << std::endl;
	std::cout << "������� �� ������� " << costFuel << std::endl;
	std::cout << "������ " << taxes << std::endl;
	std::cout << "������� �� ������ ������ " << costRepair << std::endl;
	std::cout << "����� ����� " << result << std::endl;
}