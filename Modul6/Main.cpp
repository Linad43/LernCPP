﻿#include "Main.h"

int main() {
	rusText();
	int choise = 1;
	while (choise > 0) {
		std::cout << "6.5 Практическая работа\n";
		std::cout << "Выберите задание:\n";
		std::cout << "1. Кукушка\n";
		std::cout << "2. Слишком большие чиcла\n";
		std::cout << "3. Коллекторы\n";
		std::cout << "4. Счастливый билетик\n";
		std::cout << "5. Числа фибоначчи\n";
		std::cout << "6. Вклады\n";
		std::cout << "7. Сокращение дроби\n";
		std::cout << "8. Угадай число\n";
		std::cout << "9. Калькулятор дробей (Бонус)\n";
		std::cout << "0. Выход\n";

		std::cin >> choise;

		switch (choise)
		{
		case 1: {
			system("cls");
			ex1();
			system("pause");
			system("cls");
			break;
		};
		case 2: {
			system("cls");
			ex2();
			system("pause");
			system("cls");
			break;
		};
		case 3: {
			system("cls");
			ex3();
			system("pause");
			system("cls");
			break;
		};
		case 4: {
			system("cls");
			ex4();
			system("pause");
			system("cls");
			break;
		};
		case 5: {
			system("cls");
			ex5();
			system("pause");
			system("cls");
			break;
		};
		case 6: {
			system("cls");
			ex6();
			system("pause");
			system("cls");
			break;
		};
		case 7: {
			system("cls");
			ex7();
			system("pause");
			system("cls");
			break;
		};
		case 8: {
			system("cls");
			ex8();
			system("pause");
			system("cls");
			break;
		};
		case 9: {
			system("cls");
			ex9();
			system("pause");
			system("cls");
			break;
		};
		default:
			choise = 0;
		}
	}
}