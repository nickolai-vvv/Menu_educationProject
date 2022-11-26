#include "Utils.h"

// Получает дескриптор для устройства ввода или вывода
// Позволяет изменять цвет консоли и располагать курсор в любой координате
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void init()
{
	SetConsoleOutputCP(1251); // вывод в кодировке 1251 (русский язык)
	SetConsoleCP(1251);       // ввод  в кодировке 1251 (русский язык)
	srand(GetTickCount());

	SMALL_RECT windowSize = { 0 , 0 , 85 , 25 }; // Устанавливаем размер окна консоли
	SetConsoleWindowInfo(h, true, &windowSize);
	// располагает консоль по центру экрана при запуске
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


// Заполнение массива x[] случайными числами
// со значениями от Lo до Hi
void Fill(int* x, int n, int Lo, int Hi)
{
	for (int i = 0; i < n; i++)
		x[i] = Rand(Lo, Hi);
} // Fill

// Заполнение массива x[] случайными числами
// со значениями от Lo до Hi
void Fill(double* x, int n, double Lo, double Hi)
{
	for (int i = 0; i < n; i++)
		x[i] = Rand(Lo, Hi);
} // Fill


// Вывод массива на экран, заголовок вывода - caption
void Show(int* x, int n, string caption)
{
	cout << caption;
	const int M = 10;   // количество элементов в строке
	const int W = 7;    // ширина поля вывода

	for (int i = 0; i < n; i++) {
		cout << setw(W) << x[i];
		if ((i + 1) % M == 0) cout << "\n";
	} // for i
	  // Принудительный перевод строки, если крайняя строка не заполнена
	if (n % M != 0) cout << "\n";
} // Show


// Вывод массива на экран, заголовок вывода - caption
void Show(double* x, int n, string caption)
{
	cout << caption;
	const int M = 6;   // количество элементов в строке
	const int W = 12;  // ширина поля вывода

	for (int i = 0; i < n; i++) {
		cout << setw(W) << x[i];
		if ((i + 1) % M == 0) cout << "\n";
	} // for i
	// Принудительный перевод строки, если крайняя строка не заполнена
	if (n % M != 0) cout << "\n";
} // Show


// Вывод матрицы x[][] с количеством строк m, столбцов N
// caption - надпись перед выводом матрицы
void Show(int** x, int rows, int cols, string caption)
{
	cout << caption;

	// Перебор всех элементов матрицы - при помощи вложенных циклов
	for (int i = 0; i < rows; i++) {       // внешний цикл - по строкам
		for (int j = 0; j < cols; j++) {   // вложенный цикл - по столбцам
			cout << setw(7) << x[i][j];
		} // for j
		cout << "\n";
	} // for i
} // Show


// Заполнение матрицы x[m][N] случайными числами в диапазоне от Lo до Hi
void Fill(int** x, int rows, int cols, int Lo, int Hi)
{
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			x[i][j] = Rand(Lo, Hi);
} // Fill