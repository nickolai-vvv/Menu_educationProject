#pragma once
#include "stdafx.h"
#include "Utils.h"

extern HANDLE h;

/// <summary>
/// Функция, реализующая меню.
/// Бесконечный цикл, в котором ждем отклика с клавиатуры
/// </summary>
void Menu();

/// <summary>
/// Функция, которая заполняет меню
/// </summary>
/// <param name="menu">Указатель на массив пунктов меню</param>
/// <param name="menuNum">Количество пунктов меню</param>
void FillMenu(string* menu, int menuNum);

/// <summary>
/// По нажатию на кнопку "Enter" открываем нужный пункт меню
/// </summary>
/// <param name="menu">Указатель на массив пунктов меню</param>
/// <param name="menuNum">Количество пунктов меню</param>
/// <param name="position">Номер выбранного пункта меню (начинается с 0)</param>
void Enter(string* menu, int menuNum, int position);

/// <summary>
/// Отрисовывает пункты меню. Текущий пункт меню выделяет стрелочкой "-->"
/// </summary>
/// <param name="menu">Указатель на массив пунктов меню</param>
/// <param name="menuNum">Количество пунктов меню</param>
/// <param name="position">Номер выбранного пункта меню (начинается с 0)</param>
void ArrowShow(string* menu, int menuNum, int position);