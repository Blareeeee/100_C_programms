// Транспонированная матрица

#include<stdio.h>

int main()
{
	int r, c, i, j, a[10][10], transpose[10][10];

	printf("Введите количество строк и колонок: ");
	scanf("%d %d",&r, &c);

	printf("Введите элементы матрицы:\n");

	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			printf("Введите элемент а%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	
	for(i=0;i<r;++i)
		for(j=0;j<c;++j)
		{
			transpose[i][j] = a[j][i];
		}
	printf("Транспонированная матрица: \n");

	for(i=0;i<c;++i)
		for(j=0;j<r;++j)
		{
			printf("%d	",transpose[i][j]);
			if(j==r-1)
				printf("\n\n");
		}

	return 0;
}
