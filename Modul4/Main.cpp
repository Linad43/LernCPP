#include "Main.h"
int main() {
	rusText();
	int choise = 1;
	while (choise > 0) {
		std::cout << "4.4 Практическая работа\n";
		std::cout << "Выберите задание:\n";
		std::cout << "1. Минимум из двух чисел\n";
		std::cout << "2. Складываем в уме\n";
		std::cout << "3. Проверка на чётное число\n";
		std::cout << "4. Калькулятор опыта\n";
		std::cout << "5. Кратность числа\n";
		std::cout << "6. Улучшим барберов\n";
		std::cout << "7. Меню ресторана\n";
		std::cout << "8. Зарплата (необязательная)\n";
		std::cout << "9. Прогрессивный налог (необязательная)\n";
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