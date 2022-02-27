#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b)
{
	size_t fa = strlen((const char*)a);
	size_t fb = strlen((const char*)b);
	return fa - fb;
}

int main()
{
	char s[100];
	scanf("%[^\n]s", s);
	char* p = strtok(s, " ");
	char matr[50][50];
	int n = 0;
	while (p)
	{
		strcpy(matr[n++], p);
		p = strtok(NULL, " ");
	}

	qsort(matr, n, 50, compare);
	for (int i = 0; i < n; i++)
		std::cout << matr[i] << '\n';


	return 0;
}
