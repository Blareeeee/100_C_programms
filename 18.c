// Вычисление факториала

#include <stdio.h>

int main()
{
	int n, i;
	unsigned long long factorial = 1;

	printf("Введите число: ");
	scanf("%d", &n);

	if(n < 0)
		printf("Введите положительное число!");
	else
	{
		for(i=1;i<=n;++i)
			factorial *=i;
	}
	printf("%llu", factorial);
	return 0;
}
