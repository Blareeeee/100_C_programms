// Вычисляем сумму последовательного сложения натуральных чисел
// Используем do..while

#include <stdio.h>

int main()
{
	int n, i, sum = 0;

	do
	{
		printf("Введите целое положительное число > 0: ");
		scanf("%d", &n);
	}

	while(n<=0);
	for(i=1;i<=n;++i)
	{
		sum+=i;
	}

	printf("%d", sum);
	return 0;
}
