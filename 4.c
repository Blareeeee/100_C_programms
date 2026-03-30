// Умножение двух вещественных чисел

#include <stdio.h>

int main()
{
	double firstNumber = 0.0, secondNumber = 0.0, product = 0.0;
	printf("Введите два числа: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);
	product = firstNumber * secondNumber;
	printf("Результат: %.2lf\n", product);
	return 0;
}
