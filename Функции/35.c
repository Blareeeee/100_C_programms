// Проверяем, может ли число быть выраженным как сумма двух простых чисел

#include<stdio.h>

int checkPrime(int n);

int main()
{
	int n, i, flag = 0;

	printf("Введите число: ");
	scanf("%d", &n);

	for(i=2;i<=n/2;++i)
	{
		if(checkPrime(i)==1)
		{
			if(checkPrime(n-i)==1)
			{
				printf("%d %d \n", n-i, i);
				flag=1;
			}
		}
	}
	if(flag==0)
		printf("Не может быть выражен как сумма простых чисело");

	return 0;
}

int checkPrime(int n)
{
	int flag = 1, j;

	for(j=2;j<=n/2;++j)
	{
		if(n%j==0)
		{
			flag = 0;
			break;
		}
	}
	return flag;		
}
