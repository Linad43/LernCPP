#include "Main.h"

void ex8() {
	std::cout << "8. ������ �����" << std::endl;
	int i, min = 0, max = 64, choise;
	while (1) {
		i = random(min, max-1);
		while (1) {
			std::cout << "���������� ����� ������ " << i << "? \n";
			std::cout << "1. ��\n";
			std::cout << "2. ���\n";
			std::cin >> choise;
			if (choise > 0 && choise < 3) {
				break;
			}
		}
		if (choise == 1) {
			min = i+1;
		}
		else
		{
			max = i;
		}
		if (max - min == 0) {
			std::cout << "���� �����: " << min << std::endl;
			break;
		}
	}
}