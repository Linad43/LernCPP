#include "Main.h"
int main() {
	rusText();
	int choise = 1;
	while (choise > 0) {
		std::cout << "5.6 ������������ ������" << std::endl;
		std::cout << "�������� �������:" << std::endl;
		std::cout << "1. ����� ����������" << std::endl;
		std::cout << "2. �������!" << std::endl;
		std::cout << "3. ������� - ����������" << std::endl;
		std::cout << "4. �������� - 2" << std::endl;
		std::cout << "5. ���������� ������ ��� ������" << std::endl;
		std::cout << "6. �������� ���������������" << std::endl << std::endl;
		std::cout << "0. �����" << std::endl;

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
		default:
			choise = 0;
		}
	}
}