#include "Main.h"

void ex8() {
	int height, flag;
	std::cout << "8. ®лочка*.\n";

	std::cout << "¬ведите высоту елочки: ";
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
