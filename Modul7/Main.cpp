#include "Main.h"

int main() {
	rusText();
	int choise = 1;
	while (choise > 0) {
		std::cout << "7.5 Практическая работа\n";
		std::cout << "Выберите задание:\n";
		std::cout << "1. Запасы продовольствия.\n";
		std::cout << "2. Кофемашина.\n";
		std::cout << "3. Красный Марс.\n";
		std::cout << "4. Рамка.\n";
		std::cout << "5. Координатные оси.\n";
		std::cout << "6. Важные объявления.\n";
		std::cout << "7. Биолаборатория*.\n";
		std::cout << "8. Ёлочка*.\n";
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
		default:
			choise = 0;
		}
	}
}