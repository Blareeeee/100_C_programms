// Вычисляем наибольший элемент массива

#include<stdio.h>

int main()
{
	int i, n;
	float arr[100];

	printf("Введите количество элементов: ");
	scanf("%d", &n);

	for(i=0;i<n;++i)
	{
		printf("Введите число: ");
		scanf("%f",&arr[i]);
	}

	for(i=0;i<n;++i)
	{
		if(arr[0]<arr[i])
			arr[0] = arr[i];
	}
	printf("%.2f", arr[0]);
	return 0;
}
