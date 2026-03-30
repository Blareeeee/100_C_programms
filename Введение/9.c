// Меняем местами два числа

#include <stdio.h>
int main()
{
	double a, b;
	printf("Введите 1 число:");
	scanf("%lf", &a);
	printf("Введите 2 число:");
	scanf("%lf", &b);

	a = a - b;
	b = a + b;
	a = b - a;

	printf("1 число: %.2lf", a);
	printf("2 число: %.2lf", b);
	return 0;
}
