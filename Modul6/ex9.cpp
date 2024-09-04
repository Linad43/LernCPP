#include "Main.h"

void reduct(int* a, int* b) {
	int buf = nod(*a, *b);
	*a = *a / buf;
	*b = *b / buf;
}

void sumFract(int aUp, int aDown, int bUp, int bDown, int* resultUp, int* resultDown) {
	*resultDown = nok(aDown, bDown);
	*resultUp = aUp * (nok(aDown, bDown) / aDown) + bUp * (nok(aDown, bDown) / bDown);
}

void diffFract(int aUp, int aDown, int bUp, int bDown, int* resultUp, int* resultDown) {
	sumFract(aUp, aDown, -bUp, bDown, resultUp, resultDown);
}

void mulFract(int aUp, int aDown, int bUp, int bDown, int* resultUp, int* resultDown) {
	*resultUp = aUp * bUp;
	*resultDown = aDown * bDown;
}

void delFract(int aUp, int aDown, int bUp, int bDown, int* resultUp, int* resultDown) {
	mulFract(aUp, aDown, bDown, bUp, resultUp, resultDown);
}

void printFract(int a, int b) {
	printf("%d / %d", a, b);
}

void ex9() {
	std::cout << "9. ����������� ������ (�����)" << std::endl;

	int aUp, bUp, aDown, bDown, resultUp, resultDown;

	std::cout << "������ �����: \n";
	std::cout << "���������: ";
	std::cin >> aUp;
	std::cout << "�����������: ";
	std::cin >> aDown;
	printf("%d / %d\n", aUp, aDown);
	reduct(&aUp, &aDown);
	printf("%d / %d\n", aUp, aDown);

	std::cout << "������ �����: \n";
	std::cout << "���������: ";
	std::cin >> bUp;
	std::cout << "�����������: ";
	std::cin >> bDown;
	printf("%d / %d\n", bUp, bDown);
	reduct(&bUp, &bDown);
	printf("%d / %d\n", bUp, bDown);

	sumFract(aUp, aDown, bUp, bDown, &resultUp, &resultDown);
	reduct(&resultUp, &resultDown);
	printf("(%d/%d) + (%d/%d) = (%d/%d)\n", aUp, aDown, bUp, bDown, resultUp, resultDown);

	diffFract(aUp, aDown, bUp, bDown, &resultUp, &resultDown);
	reduct(&resultUp, &resultDown);
	printf("(%d/%d) - (%d/%d) = (%d/%d)\n", aUp, aDown, bUp, bDown, resultUp, resultDown);

	mulFract(aUp, aDown, bUp, bDown, &resultUp, &resultDown);
	reduct(&resultUp, &resultDown);
	printf("(%d/%d) * (%d/%d) = (%d/%d)\n", aUp, aDown, bUp, bDown, resultUp, resultDown);

	delFract(aUp, aDown, bUp, bDown, &resultUp, &resultDown);
	reduct(&resultUp, &resultDown);
	printf("(%d/%d) / (%d/%d) = (%d/%d)\n", aUp, aDown, bUp, bDown, resultUp, resultDown);
}
