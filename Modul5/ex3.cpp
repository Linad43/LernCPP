#include "Main.h"

void ex3() {
	std::cout << "3. ������� - ����������" << std::endl;
	std::cout << "������� � ������ ��� ������ ���������� �����(1-7)" << std::endl;
	int day, firstDay;
	std::cin >> firstDay;
	firstDay--;
	int sat, sun;
	sat = (6 - firstDay) % 7;
	sun = (7 - firstDay) % 7;
	std::cout << "sat = " << sat << " sun = " << sun << std::endl;
	std::cout << "������� ����� ���" << std::endl;
	std::cin >> day;
	if (day > 0 && day <= 31) {
		if (day % 7 == sat || day % 7 == sun || (day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
			std::cout << "������ ��������" << std::endl;
		}
		else {
			std::cout << "������ �������" << std::endl;
		}
	}
	else {
		std::cout << "������ �����" << std::endl;
	}
}