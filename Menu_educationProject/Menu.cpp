#include "Menu.h"
//#inclide "stdafx.h"

void Menu()
{
	int menuNum = 5;					// ���-�� ������� ����
	string* menu = new string[menuNum];	// ������ ������� ����

	int position = 0;					// ������� (���������) ����� ���� - � ������� 0
	FillMenu(menu, menuNum);			// ��������� ����
	ArrowShow(menu, menuNum, position);	// ������� �� �����

	// ����������� ����, � ������� ����, ���� ������������ ������ �� �����������
	while (true) {

		/*
		* _getch() ��� ������� ����� �������, � ���������� � ���
		* ��� ������������� ������� ��������� ����������: conio.h
		*/
		switch (_getch()) {

		case 72:								// ��� ������� "������� �����"
			--position;							// ������� ����� ���� ������ ���� �� ����
			if (position < 0)					// ��� ����, ����� ��������� - ��������� � ������� ������ �� ���������
				position = menuNum - 1;
			ArrowShow(menu, menuNum, position); // ������������ �� ������     
			break;

			/*
				������ case 72
				��:				 �������� �� ��������� �����			��� ��� �������� �� ��������� �����
					����� 1				-> ����� 1									����� 1
				 -> ����� 2				   ����� 2									����� 2
					����� 3				   ����� 3								 -> ����� 3
			*/

		case 80:								// ��� ������� "������� ����" 
			++position;							// ����� �� ������
			if (position > menuNum - 1)
				position = 0;
			ArrowShow(menu, menuNum, position);
			break;

		case VK_RETURN:							// ��� ������� ENTER;
			system("cls");						// ������� ����� ����, ����� �������� ������ ���������� ������
			Enter(menu, menuNum, position);
			break;

		}//switch
	}//while
}//Menu()

void Enter(string* menu, int menuNum, int position) {

	switch (position) {

	case 0:
		// ���������� ������ ���� 1
		cout << "��� ����� 1." << endl;
		/*
		* ��� ��������� ����� ������� pause,
		* ������� ��� ������ �����.
		*
		* ������ ������������, ����� ���������� ����,
		* ������� ��������� ���������� �� ����� �����������,
		* ����� ����, ��� ��������� ����������,
		* � ������� ���������� ������-������ �����,
		* ����� ����� ���� ������� ���������.
		*/
		system("pause");
		system("cls"); // ������� �����
		break;

	case 1:
		cout << "��� ����� 2." << endl;
		system("pause");
		system("cls");
		break;

	case 2:
		cout << "��� ����� 3." << endl;
		system("pause");
		system("cls");
		break;

	case 3:
		cout << "��� ����� 4." << endl;
		system("pause");
		system("cls");
		break;

	case 4:
		delete[] menu;								// ������� ������ ������� ����. ������� ������
		SetConsoleCursorPosition(h, { 26, 10 });	// ���������� ������ � �����
		cout << "���������� ������";				// ����������� � ���������� ������
		SetConsoleCursorPosition(h, { 0, 22 });
		system("pause");
		exit(0);									// ������� �� ���������
		break;
	}//switch
	ArrowShow(menu, menuNum, position);				// ������������ ������ ����
}//Enter

void FillMenu(string* menu, int menuNum) {
	for (int i = 0; i < menuNum - 1; ++i)
		menu[i] = "����� ���� # " + to_string(i + 1);
	menu[menuNum - 1] = "�����";
}//FillMenu

void ArrowShow(string* menu, int menuNum, int position) {

	SetConsoleCursorPosition(h, { 0,0 }); // ��������� ������ � ��������� 0 0 (����� ����)

	for (int i = 0; i < menuNum; ++i) {

		position == i ? cout << "=> " << menu[i] << endl
			: cout << "   " << menu[i] << endl;

		/*
		// ����� �� ������������ ��������� ��������, � ������� ����� if
		if (position == i) {
			cout << "=> " << menu[i] << endl;
		} else {
			cout << "   " << menu[i] << endl;
		}//if
		*/
	}//for

	SetConsoleCursorPosition(h, { 0,23 });
	cout << "NOTICE: ������� �����/���� - ����������; ENTER - �����.";
}//ArrowShow