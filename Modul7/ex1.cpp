#include "Main.h"
#define EATING 4

void ex1() {
	std::cout << "1. ������ ��������������.\n";
	int mass = 100;
	for (int i = 0; mass > 0; printf("����� %d ������ � ��� � ������ ��������� %d �� ������\n", ++i, mass -= EATING));
}