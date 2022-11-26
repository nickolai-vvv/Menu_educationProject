#pragma once
#include "stdafx.h"

/// <summary>
/// ������������� ������� ���� � ���� ����������� ������������ ��������� ��������
/// </summary>
void init();

/// <summary>
/// ���������� ����� ����� � ��������� �� Lo �� Hi
/// </summary>
/// <param name="Lo">������ ������� ���������</param>
/// <param name="Hi">������� ������� ���������</param>
/// <returns>���������� ����� ����� � ��������� �� Lo �� Hi</returns>
int    Rand(int Lo = -10, int Hi = 10);
/// <summary>
/// ���������� ������������ (double) ����� � ��������� �� Lo �� Hi
/// </summary>
/// <param name="Lo">������ ������� ���������</param>
/// <param name="Hi">������� ������� ���������</param>
/// <returns>���������� ������������ (double) ����� � ��������� �� Lo �� Hi</returns>
double Rand(double Lo = -10, double Hi = 10);

/// <summary>
/// ��������� ����� ������ ���������� ���������� � ��������� �� Lo �� Hi
/// </summary>
/// <param name="x">��������� �� ������ ���� int</param>
/// <param name="n">������ �������</param>
/// <param name="Lo">������ ������� ���������</param>
/// <param name="Hi">������� ������� ���������</param>
void Fill(int* x, int n, int Lo, int Hi);
/// <summary>
/// ��������� ������������ (double) ������ ���������� ���������� � ��������� �� Lo �� Hi
/// </summary>
/// <param name="x">��������� �� ������ ���� double</param>
/// <param name="n">������ �������</param>
/// <param name="Lo">������ ������� ���������</param>
/// <param name="Hi">������� ������� ���������</param>
void Fill(double* x, int n, double Lo, double Hi);

/// <summary>
/// ������� ������ �� ����� � ���������� "caption"
/// </summary>
/// <param name="x">��������� �� ������ ���� int</param>
/// <param name="n">������ �������</param>
/// <param name="caption">���������, ������� � �������</param>
void Show(int* x, int n, string caption);
/// <summary>
/// ������� ������ �� ����� � ���������� "caption"
/// </summary>
/// <param name="x">��������� �� ������ ���� double</param>
/// <param name="n">������ �������</param>
/// <param name="caption">���������, ������� � �������</param>
void Show(double* x, int n, string caption);

/// <summary>
/// ������� ������� �� ����� � ���������� "caption"
/// </summary>
/// <param name="x">��������� �� ������� ���� int</param>
/// <param name="rows">���������� ����� � �������</param>
/// <param name="cols">���������� �������� � �������</param>
/// <param name="caption">���������, ������� � �������</param>
void Show(int** x, int rows, int cols, string caption);
/// <summary>
/// ��������� ������� ���� int ���������� ���������� � ��������� �� Lo �� Hi
/// </summary>
/// <param name="x">��������� �� ������� ���� int</param>
/// <param name="rows">���������� ����� � �������</param>
/// <param name="cols">���������� �������� � �������</param>
/// <param name="Lo">������ ������� ���������</param>
/// <param name="Hi">������� ������� ���������</param>
void Fill(int** x, int rows, int cols, int Lo, int Hi);
