#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int has = 0;

int main()
{
	setlocale(LC_ALL, "RUS");

	int N;

	int digit;

	puts("Введите значение числа N (N<1000):");

	scanf("%d", &N);

	while (N > 0)
	{
		digit = N % 10;

		if (digit == 5)
		{
			has = 1;

			break;
		}

		N = N / 10;
	}

	if (has)
	{
		puts("В число входит цифра 5");
	}
	else
	{
		puts("В число не входит цифра 5");
	}
	
	return 0;
}