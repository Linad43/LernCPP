#include "Main.h"

void ex6() {
	std::cout << "6. ������" << std::endl;
	int sumIn, sumOut;
	double percent;
	std::cout << "������� ������ ������: ";
	std::cin >> sumIn;
	std::cout << "������� ���������� ������: ";
	std::cin>>percent;
	percent /= 100;
	std::cout << "������� �������� �����: ";
	std::cin >> sumOut;
	int buf = sumIn, i = 0;
	while (buf < sumOut) {
		buf *= (percent + 1);
		i++;
		//printf("%d ���: %d\n", i, buf);
	}
	if (i >= 5) {
		std::cout << "������� ���������: " << i << " ���";
	}
	else if (i == 1) {
		std::cout << "������� ���������: " << i << " ���";
	}
	else {
		std::cout << "������� ���������: " << i << " ����";
	}
	std::cout<<std::endl;
}