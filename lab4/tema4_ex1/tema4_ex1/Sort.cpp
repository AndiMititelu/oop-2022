#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <cstring>
#include <iostream>
#include <algorithm>


Sort::Sort(int nr, int min, int max)
{
	this->n = n;
	this->list = new int[n]; //aloc in lista nr int-uri
	for (int i = 0; i < n; i++)
	{
		list[i] = rand() % (max-min) + min;
	}
}

Sort::Sort()
{
	n = 0;
	list = nullptr;
}

Sort::Sort(int* list, int n)
{
	this->n = n;
	this->list = new int[n];
	for (int i = 0; i < n; i++)
		this->list[i] = list[i];
}

Sort::Sort(int n, ...)
{
	this->list = new int[n];
	va_list v;
	va_start(v, n);
	for (int i = 0; i < n; i++)
	{
		list[i] = va_arg(v, int);
	}
	va_end(v);
}

Sort::Sort(char* s)
{
	int num = 1;
	for (int i = 0; i < strlen(s); i++)
	{
		if(s[i] == ',')
			++num;
	}
	this->list = new int[num];
	char* copie = new char[strlen(s) + 1];
	strcpy(copie, s);
	char* p = strtok(copie, ",");
	int i = 0;
	while (p != nullptr)
	{
		list[i++] = atoi(p);
		p = strtok(nullptr, ",");
	}
	delete[] copie;

}

void Sort::InsertSort(bool ascendent)
{
	for (int j = 1; j < n; ++j)
	{
		int i = j - 1;
		int temp = list[j];
		if (ascendent == true)
			while ((i >= 0) && (temp < list[i]))
			{
				list[i + 1] = list[i];
				i--;
			}
		else
			while ((i >= 0) && (temp > list[i]))
			{
				list[i + 1] = list[i];
				i--;
			}
		if (i != j - 1)
			list[i + 1] = temp;
	}
}

void Sort::QuickSort(bool ascendent)
{
	//
}

void Sort::BubbleSort(bool ascendent)
{
	int ultim = n - 1;
	while (ultim > 0)
	{
		int n1 = ultim - 1;
		ultim = 0;
		for (int i = 0; i <= n1; ++i)
			if (ascendent == true)
				if (list[i] > list[i + 1])
				{
					swap(list[i], list[i + 1]);
					ultim = i;
				}
				else if (list[i] > list[i + 1])
				{
					swap(list[i], list[i + 1]);
					ultim = i;
				}
	}
}

void Sort::Print() const
{
	for (int i = 0; i < n; ++i)
		std::cout << list[i] << " ";
	std::cout << "\n";
}

int Sort::GetElementsCount() const
{
	return n;
}

int Sort::GetElementFromIndex(int index) const
{
	if (index < n)
		return list[index];
	else
		return -1;
}
