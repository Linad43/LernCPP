#include "Main.h"

void ex8() {
	int height, flag;
	std::cout << "8. ������*.\n";

	std::cout << "������� ������ ������: ";
	std::cin >> height;

	if (height == 0) {
		std::cout << "\n";
	}
	else if (height > 0) {
		for (int j = 0; j < height; j++) {
			printMidKolon(height*2-1, j*2+1, '#', ' ');
		}
	}
}
