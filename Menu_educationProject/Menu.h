#pragma once
#include "stdafx.h"
#include "Utils.h"

extern HANDLE h;

/// <summary>
/// �������, ����������� ����.
/// ����������� ����, � ������� ���� ������� � ����������
/// </summary>
void Menu();

/// <summary>
/// �������, ������� ��������� ����
/// </summary>
/// <param name="menu">��������� �� ������ ������� ����</param>
/// <param name="menuNum">���������� ������� ����</param>
void FillMenu(string* menu, int menuNum);

/// <summary>
/// �� ������� �� ������ "Enter" ��������� ������ ����� ����
/// </summary>
/// <param name="menu">��������� �� ������ ������� ����</param>
/// <param name="menuNum">���������� ������� ����</param>
/// <param name="position">����� ���������� ������ ���� (���������� � 0)</param>
void Enter(string* menu, int menuNum, int position);

/// <summary>
/// ������������ ������ ����. ������� ����� ���� �������� ���������� "-->"
/// </summary>
/// <param name="menu">��������� �� ������ ������� ����</param>
/// <param name="menuNum">���������� ������� ����</param>
/// <param name="position">����� ���������� ������ ���� (���������� � 0)</param>
void ArrowShow(string* menu, int menuNum, int position);