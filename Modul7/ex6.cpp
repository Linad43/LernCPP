#include "Main.h"
#define MID '!'
#define ALL '~'

void printMidKolon(int countSum, int countMid, char mid, char all) {
	for (int i = 0; i < (countSum - countMid); i++) {
		if (i == (countSum - countMid) / 2) {
			for (int j = 0; j < countMid; j++) {
				std::cout << mid;
			}
		}
		std::cout << all;
	}
	if (countSum == countMid) {
		for (int i = 0; i < countMid; i++)
			std::cout << mid;
	}
	std::cout << '\n';
}

void ex6() {
	int countSum, countMid;
	while (1) {
		while (1) {
			std::cout << "¬ведите общую длину колонтитула: ";
			std::cin >> countSum;
			if (countSum <= 0) {
				std::cout << "ƒлина колонтитула не может быть отрицательной или равной нулю\n";
				continue;
			}
			else break;
		}
		while (1) {
			std::cout << "¬ведите кол-во восклицательных знаков: ";
			std::cin >> countMid;
			if (countMid < 0) {
				std::cout << " ол-во ¬осклицательных знаков не может быть отрицательным\n";
				continue;
			}
			else break;
		}
		if (countMid > countSum) {
			std::cout << " ол-во восклицательных знаков не может быть больше общей длинны\n";
			continue;
		}
		printMidKolon(countSum, countMid, MID, ALL);
		break;
	}
}