/*Создать пустой проект Console Application и реализовать в нем программу по
вычислению стоимости поездки на автомобиле(исходными данными являются : километраж,
расход топлива, цена единицы топлива).*/

#include "pch.h"
#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double km, pricegaz, gaz, price;
	cout << "Введите исходные данные." << endl;
	cout << "Километраж: "; cin >> km; cout << endl;
	cout << "Расход топлива на 100 км пути:: "; cin >> gaz; cout << endl;
	cout << "Стоимость бензина: "; cin >> pricegaz; cout << endl;
	gaz = gaz / 100;
	price = gaz * km * pricegaz;
	cout << "Стоимость поездки: " << price << " руб." << endl << endl;
	system("pause");
	                                                                                                        
}
