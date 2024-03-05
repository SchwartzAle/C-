#include <iostream>
#include "Helpers.h"
#include "Math.h"
#include <string>
#include <cmath>

const int N = 10; 
// писать без std::
using namespace std;


int main()
{//ДЗ 13
	//квадрат суммы при помощи 2х заголовков
	std::cout << SumCube(sum(1, 2)) << std::endl;
	//квадрат суммы при помощи 1ого заголовка
	std::cout << SumCube2(2, 3) << std::endl;
	//Квадрат суммы 3 способ
	std::cout << pow(2 + 3, 2) << std::endl;
//ДЗ 14
	//запоминает слова, которые впишут
	std::cout << "Enter your name: ";
	std::string name;
	std::getline(std::cin, name);
	//Выводит имя
	std::cout << "" << name << "\n";
	//Выводит размер имени
	std::cout << "Kolichestvo bukv: " << name.length() << "\n";
	//Выводит последнюю букву имени
	std::cout << "Posledniy simvol: " << name.back() << "\n";
	//Выводит первую букву имени
	std::cout << "Pervii simvol: " << name.front() << "\n";
//ДЗ 15
     //возможность писать по русски
    setlocale(LC_ALL, "Russian");
	int s = 0;
	//просто ряд чётных цифр
	for (int i = 0; i < N; i += 2)
		std::cout << i << "\n";
		
	//даёт выбор между чётными или нечётными
	int O;
	std::cout << "\n" << "2 - чётные, 1 - нечётные: ";
	std::cin >> O;
	
	//если выбор за нечётными
	if (O == 1)
	{
		for (int i = 1; i <= N; i += 2)
		{
			std::cout << i << ' ';
		}
	}
	//если выбор за чётными
	if (O == 2)
	{
		for (int i = 2; i <= N; i += 2)
		{
			cout << i << ' ';
		}
	}
	//если сделали не правильный выбор
	if (O>2)
	{
		std::cout << "Вы выбрали не то(( ";
	}
}


