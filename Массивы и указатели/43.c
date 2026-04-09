// Вычисляем среднее использование массивов

#include<stdio.h>

int main()
{
	int n, i;
	float num[100], sum = 0.0, average;

	printf("Введите количество элементов: ");
	scanf("%d", &n);

	for(i=0;i<n;++i)
	{
		printf("Введите число: ");
		scanf("%f", &num[i]);
		sum += num[i];
	}
	
	average = sum / n;
	printf("%f", average);

	return 0;
}
