#include "Main.h"

int main() {
	rusText();
	int choise = 1;
	while (choise > 0) {
		std::cout << "6.5 ������������ ������\n";
		std::cout << "�������� �������:\n";
		std::cout << "1. �������\n";
		std::cout << "2. ������� ������� ��c��\n";
		std::cout << "3. ����������\n";
		std::cout << "4. ���������� �������\n";
		std::cout << "5. ����� ���������\n";
		std::cout << "6. ������\n";
		std::cout << "7. ���������� �����\n";
		std::cout << "8. ������ �����\n";
		std::cout << "9. ����������� ������ (�����)\n";
		std::cout << "0. �����\n";

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