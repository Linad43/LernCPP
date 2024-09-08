#include "Main.h"
#define EATING 4

void ex1() {
	std::cout << "1. Запасы продовольствия.\n";
	int mass = 100;
	for (int i = 0; mass > 0; printf("После %d месяца у вас в запасе останется %d кг гречки\n", ++i, mass -= EATING));
}