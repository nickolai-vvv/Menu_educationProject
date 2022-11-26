#include "Menu.h"
//#inclide "stdafx.h"

void Menu()
{
	int menuNum = 5;					// Кол-во пунктов меню
	string* menu = new string[menuNum];	// Массив пунктов меню

	int position = 0;					// Текущий (выбранный) пункт меню - с номером 0
	FillMenu(menu, menuNum);			// Заполняем меню
	ArrowShow(menu, menuNum, position);	// Выводим на экран

	// Бесконечный цикл, в котором ждем, пока пользователь нажмет на клавиаутуру
	while (true) {

		/*
		* _getch() ждёт нажатия любой клавиши, и возвращает её код
		* для использования функции требуется библиотека: conio.h
		*/
		switch (_getch()) {

		case 72:								// Код клавиши "стрелка вверх"
			--position;							// Текущий пункт меню теперь выше на один
			if (position < 0)					// Для того, чтобы зациклить - переходим с первого пункта на последний
				position = menuNum - 1;
			ArrowShow(menu, menuNum, position); // Отрисовываем на экране     
			break;

			/*
				Пример case 72
				до:				 Нажимаем на стрелочку вверх			Ещё раз нажимаем на стрелочку вверх
					Пукнт 1				-> Пункт 1									Пункт 1
				 -> Пункт 2				   Пукнт 2									Пункт 2
					Пункт 3				   Пункт 3								 -> Пункт 3
			*/

		case 80:								// Код клавиши "стрелка вниз" 
			++position;							// Такая же логика
			if (position > menuNum - 1)
				position = 0;
			ArrowShow(menu, menuNum, position);
			break;

		case VK_RETURN:							// КОД клавиши ENTER;
			system("cls");						// Очищаем экран меню, чтобы показать только содержание пункта
			Enter(menu, menuNum, position);
			break;

		}//switch
	}//while
}//Menu()

void Enter(string* menu, int menuNum, int position) {

	switch (position) {

	case 0:
		// Содержимое пункта меню 1
		cout << "Это пункт 1." << endl;
		/*
		* Это системный вызов команды pause,
		* которая ждёт любого ввода.
		*
		* Обычно используется, чтобы консольное окно,
		* которое открывает приложение не сразу закрывалось,
		* после того, как программа отработает,
		* а сначала дожидались какого-нибудь ввода,
		* чтобы можно было увидеть результат.
		*/
		system("pause");
		system("cls"); // Очищаем экран
		break;

	case 1:
		cout << "Это пункт 2." << endl;
		system("pause");
		system("cls");
		break;

	case 2:
		cout << "Это пункт 3." << endl;
		system("pause");
		system("cls");
		break;

	case 3:
		cout << "Это пункт 4." << endl;
		system("pause");
		system("cls");
		break;

	case 4:
		delete[] menu;								// Удаляем массив пунктов меню. Очищаем память
		SetConsoleCursorPosition(h, { 26, 10 });	// Перемещаем курсор в центр
		cout << "Завершение работы";				// Информируем о завершении работы
		SetConsoleCursorPosition(h, { 0, 22 });
		system("pause");
		exit(0);									// Выходим из программы
		break;
	}//switch
	ArrowShow(menu, menuNum, position);				// Отрисовываем пункты меню
}//Enter

void FillMenu(string* menu, int menuNum) {
	for (int i = 0; i < menuNum - 1; ++i)
		menu[i] = "Пукнт меню # " + to_string(i + 1);
	menu[menuNum - 1] = "Выход";
}//FillMenu

void ArrowShow(string* menu, int menuNum, int position) {

	SetConsoleCursorPosition(h, { 0,0 }); // Переносим курсор в положение 0 0 (левый верх)

	for (int i = 0; i < menuNum; ++i) {

		position == i ? cout << "=> " << menu[i] << endl
			: cout << "   " << menu[i] << endl;

		/*
		// Можно не использовать тернарный оператор, а сделать через if
		if (position == i) {
			cout << "=> " << menu[i] << endl;
		} else {
			cout << "   " << menu[i] << endl;
		}//if
		*/
	}//for

	SetConsoleCursorPosition(h, { 0,23 });
	cout << "NOTICE: стрелки вверх/вниз - управление; ENTER - выбор.";
}//ArrowShow