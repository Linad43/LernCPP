#include "Main.h"
#define MIN 0.0
#define MAX 10000.0
#define MININT 0
#define MAXINT 100

void ex1() {
	float m, f;
	int t, choise;
	while (1)
	{
		std::cout << "1. ����������� ���������.\n";
		std::cout << "	1. ������ ����\n";
		std::cout << "	2. ��������� �������� ��� �����, ���� ���� � �������\n";
		std::cin >> choise;
		if (choise == 1) {
			/*while (1)
			{
				std::cout << "��� ��������� ����� �����? ";
				std::cin >> m;
				if (m <= 0) {
					std::cout << "����� ���������� ������ ���� ���� ����\n";
					continue;
				}
				break;
			}*/
			//������� ������� � ����� ..\CoopFunc\CreateVar.cpp
			m = createFloat(1, "��� ��������� ����� �����? ");
			std::cout << "�������� ��������� � ����� ����... ";
			std::cin >> f;
			/*while (1)
			{
				std::cout << "�� ����� �����? ";
				std::cin >> t;
				if (t < 0) {
					std::cout << "������ �� ����� ������������� ��� ������������� �������\n";
					continue;
				}
				break;
			}*/
			t = createFloat(0, "�� ����� �����? ");
			break;
		}
		else if (choise == 2) {
			m = random((float)MIN, (float)MAX);
			f = random((float)MIN, (float)MAX);
			t = random((int)MININT, (int)MAXINT);
			std::cout << "��� ��������� ������ " << m << " ���������\n";
			std::cout << "�������� ��������� � ����� ���� " << f << " �������� �� " << t << " ������.\n";
			break;
		}
		else {
			std::cout << "������������ ��������\n";
		}
	}
	float s = ((f / m) * t * t) / 2;
	std::cout << "���������� ������� ���������� ������� " << s << " ������\n";

}