#include "Main.h"

void ex7() {
	std::cout << "7. ���� ���������\n";

	int day;
	std::cout << "������� ���� ������ (1-7): " << std::endl;
	std::cin >> day;
	switch (day)
	{
	case 1: {
		std::cout << "���� ������� ";
		std::cout << "(�����������):" << std::endl;
		std::cout << "������� � ������� ���� � ������ ������" << std::endl;
		std::cout << "����������� � ��������� ����� � ��� � �������" << std::endl;
		std::cout << "����� � ������� �������, ���������� ���������� � ������ ��-����������" << std::endl;
		std::cout << "������� �� ������ � ������� � ��������� �������" << std::endl;
		break;
	}
	case 2: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "������� � ���������� ������" << std::endl;
		std::cout << "������� ������� �� ����� � ����" << std::endl;
		std::cout << "�������� � ������ � ��������" << std::endl;
		std::cout << "��� � �������" << std::endl;
		break;
	}
	case 3: {
		std::cout << "���� ������� ";
		std::cout << "(�����):" << std::endl;
		std::cout << "������� ���� � �������-���������� ����������" << std::endl;
		std::cout << "������ ����-��� � ��������" << std::endl;
		std::cout << "������� � ����� � ��������" << std::endl;
		std::cout << "������� ������� � ������� � ��������� ����� � ���" << std::endl;
		break;
	}
	case 4: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "��������� ������� � ����� � ����������� ������" << std::endl;
		std::cout << "���� �� �������� � ��������� ����" << std::endl;
		std::cout << "���� ��-�����������" << std::endl;
		std::cout << "��������� �������� � ������ ��� �����-��������� ������" << std::endl;
		break;
	}
	case 5: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "����� � ��������" << std::endl;
		std::cout << "������� �� ������ � ������� � ��������" << std::endl;
		std::cout << "������� � ��������� ���������� � ��������� ������" << std::endl;
		std::cout << "������� ������� � ��������-������� ����� � ������" << std::endl;
		break;
	}
	case 6: {
		std::cout << "���� ������� ";
		std::cout << "(�������):" << std::endl;
		std::cout << "���������� ���� � ������������������� �������" << std::endl;
		std::cout << "����� �� ��������� ����� � ������" << std::endl;
		std::cout << "����� � �������, ����� � ��������� ������" << std::endl;
		std::cout << "������ ��������� � ������� �������� � ����" << std::endl;
		break;
	}
	case 7: {
		std::cout << "���� ������� ";
		std::cout << "(�����������):" << std::endl;
		std::cout << "��������� ������� � ����� � ����������� ������" << std::endl;
		std::cout << "���� �� �������� � ��������� ����" << std::endl;
		std::cout << "���� ��-�����������" << std::endl;
		std::cout << "��������� �������� � ������ ��� �����-��������� ������" << std::endl;
		break;
	}
	default:
		std::cout << "������ �����" << std::endl;
		break;
	}
}