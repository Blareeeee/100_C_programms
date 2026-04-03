// Простой калькулятор с использованием switch..case

#include<stdio.h>

int main()
{
	char operator;
	double n1, n2;

	printf("Введите оператор: ");
	scanf("%c", &operator);

	printf("Введите два числа: ");
	scanf("%lf %lf", &n1, &n2);

	switch(operator)
	{
		case '+':
			printf("%1lf", n1+n2);
			break;
		
		case '-':
			printf("%1lf", n1-n2);
			break;

		case '*':
			printf("%1lf", n1*n2);
			break;
		case '/':
			printf("%1lf", n1/n2);
			break;
		default:
			printf("Оператор неизвестен");
	}
	return 0;
}
