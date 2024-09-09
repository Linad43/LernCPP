#include "Main.h"

int main() {
	rusText();
	std::cout << "Что то на русском\n";
	unsigned char text[20];
	std::cin >> text;
	std::cout << "Вы ввели:\n";
	std::cout << text;
}