// Сложение двух матриц с использованием многомерных массивов

#include<stdio.h>

int main()
{
	int i, j, c, r, a[100][100], b[100][100], sum[100][100];

	printf("Введите количество строк: ");
	scanf("%d",&r);
	printf("Введите количество колонок: ");
	scanf("%d",&c);
	
	printf("Введите значения для матрицы А\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Введите элемент a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}

	printf("Введите значения для матрицы Б\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Введите элемент b%d%d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}


	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	
	printf("\nСумма 2 матриц: \n\n");	

	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{

			printf("%d	",sum[i][j]);

			if(j == c-1)
			{
				printf("\n\n");
			}
		}
	return 0;
}
