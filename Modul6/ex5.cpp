#include "Main.h"

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		int first, second, buf = 0;
		first = second = 1;
		int i = 2;
		while (i++ < n) {
			buf = first + second;
			first = second;
			second = buf;
		}
		return buf;
	}
}

void ex5() {
	std::cout << "5. Числа фибоначчи" << std::endl;
	int numFib;
	while (1) {
		std::cout << "Введите номер последовательности: ";
		/*printf("\n");
		for (int i = 2; fib(i-1) <= fib(i); i++) {
			printf("fib(%d) = %d\n", i, fib(i));
		}*/
		std::cin >> numFib;
		if (numFib > 0 && numFib < 47) {
			break;
		}
		else
		{
			std::cout << "Неверное значение, число должно быть в пределах [1,46]\n";
		}
	}
	std::cout << "Число в последовательности: " << fib(numFib) << "\n";
}
