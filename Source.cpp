#include <iostream>
#include "Helpers.h"
#include "Math.h"
#include <string>
#include <cmath>

const int N = 10; 
// ������ ��� std::
using namespace std;


int main()
{//�� 13
	//������� ����� ��� ������ 2� ����������
	std::cout << SumCube(sum(1, 2)) << std::endl;
	//������� ����� ��� ������ 1��� ���������
	std::cout << SumCube2(2, 3) << std::endl;
	//������� ����� 3 ������
	std::cout << pow(2 + 3, 2) << std::endl;
//�� 14
	//���������� �����, ������� ������
	std::cout << "Enter your name: ";
	std::string name;
	std::getline(std::cin, name);
	//������� ���
	std::cout << "" << name << "\n";
	//������� ������ �����
	std::cout << "Kolichestvo bukv: " << name.length() << "\n";
	//������� ��������� ����� �����
	std::cout << "Posledniy simvol: " << name.back() << "\n";
	//������� ������ ����� �����
	std::cout << "Pervii simvol: " << name.front() << "\n";
//�� 15
     //����������� ������ �� ������
    setlocale(LC_ALL, "Russian");
	int s = 0;
	//������ ��� ������ ����
	for (int i = 0; i < N; i += 2)
		std::cout << i << "\n";
		
	//��� ����� ����� ������� ��� ���������
	int O;
	std::cout << "\n" << "2 - ������, 1 - ��������: ";
	std::cin >> O;
	
	//���� ����� �� ���������
	if (O == 1)
	{
		for (int i = 1; i <= N; i += 2)
		{
			std::cout << i << ' ';
		}
	}
	//���� ����� �� �������
	if (O == 2)
	{
		for (int i = 2; i <= N; i += 2)
		{
			cout << i << ' ';
		}
	}
	//���� ������� �� ���������� �����
	if (O>2)
	{
		std::cout << "�� ������� �� ��(( ";
	}
}


