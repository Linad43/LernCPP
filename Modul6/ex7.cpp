#include "Main.h"

void ex7() {
	std::cout << "7. ���������� �����" << std::endl;
	int num, denom;
	std::cout << "������� ���������: ";
	std::cin >> num;
	std::cout << "������� �����������: ";
	std::cin >> denom;
	if (denom == 0) {
		std::cout << "������� �� ���� ����������\n";
		return;
	}
	else if (num == 0) {
		std::cout << "���������: 0\n";
		return;
	}
	else if (num * denom < 0) {
		num = -abs(num);
		denom = abs(denom);
	}
	else if (num < 0) {
		num = abs(num);
		denom = abs(denom);
	}
	std::cout << "���������: " << num / nod(num, denom) << " / " << denom / nod(num, denom) << std::endl;
}
