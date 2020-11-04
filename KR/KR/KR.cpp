#include "pch.h"
#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	FILE *hw;
	char L;
	char filename[25];
	cout << "Введите название файла(вместе с .txt): ";
	cin >> filename;
	fopen_s(&hw, filename , "r");
	cout << "Открытие файла: ";
	if (hw == NULL)
	{
		cout << "ошибка" << endl;
		return -1;
	}
	else
		cout << " выполнено" << endl;
	cout << "Содержание файла: ";

	while (1)
	{
	
		L = fgetc(hw);

	
		if (L == EOF)
		{
		
			if (feof(hw) != 0)
			{
			
				cout << "\nЧтение файла закончено!"<< endl;
				break;
			}
			else
			{
			
				cout << "\nОшибка чтения из файла" << endl;
				break;
			}
		}
	
		cout << L;
	}

	cout << "Закрытие файла: ";
	if (fclose(hw) == EOF)
		cout << "ошибка" << endl;
	else
		cout << "выполнено" << endl;

	system("pause");
}
