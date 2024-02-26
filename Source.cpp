#include <iostream>
#include "Helpers.h"
#include "Math.h"

//функция вызова результатов
int main()
{
	//квадрат суммы при помощи 2х заголовков
	std::cout << SumCube (sum (1, 2)) << std::endl;
	//квадрат суммы при помощи 1ого заголовка
	std::cout << SumCube2 (2, 3) << std::endl;
}

