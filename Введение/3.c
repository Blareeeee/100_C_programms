// Сумма двух чисел

#include <stdio.h>

int main()
{
	int FirstNumber, SecondNumber, sum;
	printf("Введите два целых числа: ");
	scanf("%d %d", &FirstNumber, &SecondNumber);
	sum = FirstNumber + SecondNumber;
	printf("%d + %d = %d", FirstNumber, SecondNumber, sum);
	return 0;
}

