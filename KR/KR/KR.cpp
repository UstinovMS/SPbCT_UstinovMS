#include "pch.h"
#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	FILE *hw;
	char L;
	/*char filename[25];
	cout << "Введите название файла(вместе с .txt): ";
	cin >> filename;*/
	fopen_s(&hw, argv[1] , "r");
	printf("Открытие файла: ");
	if (hw == NULL)
	{
		printf("ошибка\n");
		return -1;
	}
	else
		cout << " выполнено" << endl;
	printf("Содержание файла: ");

	while (1)
	{
	
		L = fgetc(hw);

	
		if (L == EOF)
		{
		
			if (feof(hw) != 0)
			{
			
				printf("\nЧтение файла закончено!\n");
				break;
			}
			else
			{
			
				printf("\nОшибка чтения из файла\n");
				break;
			}
		}
	
		printf(" %c", L);
	}

	printf("Закрытие файла: ");
	if (fclose(hw) == EOF)
		printf("ошибка\n");
	else
		printf("выполнено\n");

	system("pause");
}
