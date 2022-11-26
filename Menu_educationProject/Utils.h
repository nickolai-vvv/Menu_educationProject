#pragma once
#include "stdafx.h"

/// <summary>
/// Устанавливает русский язык и дает возможность генерировать случайные значения
/// </summary>
void init();

/// <summary>
/// Генерирует целое число в диапазоне от Lo до Hi
/// </summary>
/// <param name="Lo">Нижния граница диапазона</param>
/// <param name="Hi">Верхняя граница диапазона</param>
/// <returns>Возвращает целое число в диапазоне от Lo до Hi</returns>
int    Rand(int Lo = -10, int Hi = 10);
/// <summary>
/// Генерирует вещественное (double) число в диапазоне от Lo до Hi
/// </summary>
/// <param name="Lo">Нижния граница диапазона</param>
/// <param name="Hi">Верхняя граница диапазона</param>
/// <returns>Возвращает вещественное (double) число в диапазоне от Lo до Hi</returns>
double Rand(double Lo = -10, double Hi = 10);

/// <summary>
/// Заполняет целый массив случайными значениями в диапазоне от Lo до Hi
/// </summary>
/// <param name="x">Указатель на массив типа int</param>
/// <param name="n">Размер массива</param>
/// <param name="Lo">Нижния граница диапазона</param>
/// <param name="Hi">Верхняя граница диапазона</param>
void Fill(int* x, int n, int Lo, int Hi);
/// <summary>
/// Заполняет вещественный (double) массив случайными значениями в диапазоне от Lo до Hi
/// </summary>
/// <param name="x">Указатель на массив типа double</param>
/// <param name="n">Размер массива</param>
/// <param name="Lo">Нижния граница диапазона</param>
/// <param name="Hi">Верхняя граница диапазона</param>
void Fill(double* x, int n, double Lo, double Hi);

/// <summary>
/// Выводит массив на экран с заголовком "caption"
/// </summary>
/// <param name="x">Указатель на массив типа int</param>
/// <param name="n">Размер массива</param>
/// <param name="caption">Заголовок, подпись к массиву</param>
void Show(int* x, int n, string caption);
/// <summary>
/// Выводит массив на экран с заголовком "caption"
/// </summary>
/// <param name="x">Указатель на массив типа double</param>
/// <param name="n">Размер массива</param>
/// <param name="caption">Заголовок, подпись к массиву</param>
void Show(double* x, int n, string caption);

/// <summary>
/// Выводит матрицу на экран с заголовком "caption"
/// </summary>
/// <param name="x">Указатель на матрицу типа int</param>
/// <param name="rows">Количество строк в матрице</param>
/// <param name="cols">Количество столбцов в матрице</param>
/// <param name="caption">Заголовок, подпись к массиву</param>
void Show(int** x, int rows, int cols, string caption);
/// <summary>
/// Заполняет матрицу типа int случайными значениями в диапазоне от Lo до Hi
/// </summary>
/// <param name="x">Указатель на матрицу типа int</param>
/// <param name="rows">Количество строк в матрице</param>
/// <param name="cols">Количество столбцов в матрице</param>
/// <param name="Lo">Нижния граница диапазона</param>
/// <param name="Hi">Верхняя граница диапазона</param>
void Fill(int** x, int rows, int cols, int Lo, int Hi);
