#include "Main.h"

void ex6() {
	std::cout << "6. �������� ���������������" << std::endl;
	std::cout << "������� ���� ��������(����.��.��)" << std::endl;
	int personYear, personMounth, personDay;
	/*���� ������ ������� ��������������� ���� ������ "scanf_s"?
	� ���� ���������
	cin >> year >> mounth >> day
	�� � ����� ������ ����� ������� ������ ����� ������
	� ��� �� ������� ����� �����, ����� ������ ��������� ������, � ��������� ������ ����� �����?*/
	scanf_s("%d.%d.%d", &personYear, &personMounth, &personDay);
	std::cout << "������� ����������� ����(����.��.��)" << std::endl;
	int nowYear, nowMounth, nowDay;
	scanf_s("%d.%d.%d", &nowYear, &nowMounth, &nowDay);
	bool flag = 0;
	if (nowYear - personYear > 18) {
		flag = 1;
	}
	else if (nowYear - personYear == 18) {
		if (nowMounth - personMounth > 0) {
			flag = 1;
		}
		else if (nowMounth - personMounth == 0) {
			if (nowDay - personDay > 0) {
				flag = 1;
			}
		}
	}
	if (flag) {
		std::cout << "��������� �������� �����" << std::endl;
	}
	else {
		std::cout << "��������� �������� ������!" << std::endl;
	}
}