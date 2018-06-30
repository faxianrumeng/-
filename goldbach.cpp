#include "graph.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include<cmath>
using namespace std;
int GoldbachConjection::PrimeNumber(const int inter)
{
	const int temp = inter;
	int* temp_ptr = nullptr;
	temp_ptr = (int*)malloc(inter * sizeof(int));
	for (int i = 0; i < inter; i++)
	{
		temp_ptr[i] = i + 1;
	}
	temp_ptr[0] = 0;
	for (int i = 0; i <= (inter / 2)-1; i++)
	{
		int j = 2;
		if (temp_ptr[i] == 0)
			continue;
		else
		while (((i + 1)*j - 1) <= inter)
			{
				temp_ptr[(i+1)*j-1] = 0;
				j +=1;
			}
	}
	int* P = (int*)malloc(inter*sizeof(int));
	int k = 0;
	int temp1 = 0;
	for (int i = 0; i < inter; i++)
	{
		if (temp_ptr[i] != 0)
		{
			temp1 = temp_ptr[i];
			P[k] = temp_ptr[i];
			k += 1;
		}
	}
	ptr = (int*)malloc(k*sizeof(int));
	for (int i = 0; i < k; i++)
	{
		ptr[i] = P[i];
	}
	return k;
}
bool GoldbachConjection::judge(int* point, int data, int length)
{
	bool record = false;
	int i = 0;
	while (i<length)
	{
		if (*(point + i)==data)
		{
			record = true;
			break;
		}
		i += 1;
	}
	return record;
	
}
combination GoldbachConjection::Decompose(const int number)
{
	bool record = false;
	int one = 1;
	int two = 1;
	if (number<4 || number%2!=0)
	{
		cout << "number error" << endl;
	}
	else
	{
		int arrayLength = PrimeNumber(number);
		int i = 0;
		while (ptr[i]<=number/2)
		{
			record = judge(ptr, number - ptr[i], arrayLength);
			if (record == true)
			{
				one = ptr[i];
				two = number - ptr[i];
				break;
			}
			i += 1;
		}
	}
	combination PrimeCombination;
	PrimeCombination.one = one;
	PrimeCombination.two = two;
	return PrimeCombination;
}