#include "Utils.h"

// �������� ���������� ��� ���������� ����� ��� ������
// ��������� �������� ���� ������� � ����������� ������ � ����� ����������
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void init()
{
	SetConsoleOutputCP(1251); // ����� � ��������� 1251 (������� ����)
	SetConsoleCP(1251);       // ����  � ��������� 1251 (������� ����)
	srand(GetTickCount());

	SMALL_RECT windowSize = { 0 , 0 , 85 , 25 }; // ������������� ������ ���� �������
	SetConsoleWindowInfo(h, true, &windowSize);
	// ����������� ������� �� ������ ������ ��� �������
	SetWindowPos(GetConsoleWindow(), 0, 500, 250, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
} // init


int Rand(int Lo, int Hi)
{
	return Lo + rand() % (Hi - Lo + 1);
} // Rand

double Rand(double Lo, double Hi)
{
	return Lo + (Hi - Lo) * rand() / (RAND_MAX + 1);
} // Rand


// ���������� ������� x[] ���������� �������
// �� ���������� �� Lo �� Hi
void Fill(int* x, int n, int Lo, int Hi)
{
	for (int i = 0; i < n; i++)
		x[i] = Rand(Lo, Hi);
} // Fill

// ���������� ������� x[] ���������� �������
// �� ���������� �� Lo �� Hi
void Fill(double* x, int n, double Lo, double Hi)
{
	for (int i = 0; i < n; i++)
		x[i] = Rand(Lo, Hi);
} // Fill


// ����� ������� �� �����, ��������� ������ - caption
void Show(int* x, int n, string caption)
{
	cout << caption;
	const int M = 10;   // ���������� ��������� � ������
	const int W = 7;    // ������ ���� ������

	for (int i = 0; i < n; i++) {
		cout << setw(W) << x[i];
		if ((i + 1) % M == 0) cout << "\n";
	} // for i
	  // �������������� ������� ������, ���� ������� ������ �� ���������
	if (n % M != 0) cout << "\n";
} // Show


// ����� ������� �� �����, ��������� ������ - caption
void Show(double* x, int n, string caption)
{
	cout << caption;
	const int M = 6;   // ���������� ��������� � ������
	const int W = 12;  // ������ ���� ������

	for (int i = 0; i < n; i++) {
		cout << setw(W) << x[i];
		if ((i + 1) % M == 0) cout << "\n";
	} // for i
	// �������������� ������� ������, ���� ������� ������ �� ���������
	if (n % M != 0) cout << "\n";
} // Show


// ����� ������� x[][] � ����������� ����� m, �������� N
// caption - ������� ����� ������� �������
void Show(int** x, int rows, int cols, string caption)
{
	cout << caption;

	// ������� ���� ��������� ������� - ��� ������ ��������� ������
	for (int i = 0; i < rows; i++) {       // ������� ���� - �� �������
		for (int j = 0; j < cols; j++) {   // ��������� ���� - �� ��������
			cout << setw(7) << x[i][j];
		} // for j
		cout << "\n";
	} // for i
} // Show


// ���������� ������� x[m][N] ���������� ������� � ��������� �� Lo �� Hi
void Fill(int** x, int rows, int cols, int Lo, int Hi)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			x[i][j] = Rand(Lo, Hi);
} // Fill