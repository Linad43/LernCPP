#include "Main.h"

void ex4() {
	std::cout << "5. �������� - 2" << std::endl;
	std::cout << "����� ����� ������ �����?" << std::endl;
	int sum, num5k, num2k, num1k, num5h, num2h, num1h;
	std::cin >> sum;
	int buf = sum;
	if (sum % 100 == 0 && sum <= 150000 && sum > 0) {
		num5k = buf / 5000;
		buf %= 5000;
		num2k = buf / 2000;
		buf %= 2000;
		num1k = buf / 1000;
		buf %= 1000;
		num5h = buf / 500;
		buf %= 500;
		num2h = buf / 200;
		buf %= 200;
		num1h = buf / 100;
		buf %= 100;
		std::cout << "�� �������� �� ����" << std::endl;
		std::cout << num5k << " ����� ��������� 5000" << std::endl;
		std::cout << num2k << " ����� ��������� 2000" << std::endl;
		std::cout << num1k << " ����� ��������� 1000" << std::endl;
		std::cout << num5h << " ����� ��������� 500" << std::endl;
		std::cout << num2h << " ����� ��������� 200" << std::endl;
		std::cout << num1h << " ����� ��������� 100" << std::endl;
	}
	else if (sum < 0) {
		std::cout << "��������� �������� �� ����� ���� ������ ����" << std::endl;
	}
	else if (sum % 100 != 0) {
		std::cout << "��������� �������� ������ ���� ������ 100" << std::endl;
	}
	else {
		std::cout << "�� �� ������ ����� ������ 150 000 �" << std::endl;
	}
}