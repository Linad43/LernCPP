#include "Main.h"

void ex8() {
	std::cout << "8. �������� (��������������)\n";

	int salary[3];
	std::cout << "������� �������� ������� ����������: " << std::endl;
	std::cin >> salary[0];
	std::cout << "������� �������� ������� ����������: " << std::endl;
	std::cin >> salary[1];
	std::cout << "������� �������� �������� ����������: " << std::endl;
	std::cin >> salary[2];
	int max = salary[0];
	int min = max;
	int sum = 0;
	for (int i = 0; i < std::size(salary); i++) {
		if (salary[i] > max) {
			max = salary[i];
		}
		if (salary[i] < min) {
			min = salary[i];
		}
		sum += salary[i];
	}
	std::cout << "����� ������� �������� " << max << std::endl;
	std::cout << "������� ����� ����� ������� ��������� � ����� ������: " << max - min << std::endl;
	std::cout << "������� �������� " << ((double)sum) / 3 << std::endl;
}