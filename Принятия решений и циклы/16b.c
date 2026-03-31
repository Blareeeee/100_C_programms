// Вычисление суммы последовательного сложения натуральных чисел
// Используем цикл while

#include <stdio.h>

int main()
{
	int n, i = 1, sum = 0;

	printf("Введите число: ");
	scanf("%d", &n);

	while (i <=n)
		{
			sum += i;
			++i;
		}
	
	printf("%d", sum);

	return 0;
}
