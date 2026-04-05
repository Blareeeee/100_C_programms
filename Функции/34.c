// Отображаем простые числа между двумя интервалами с использованием функции

#include<stdio.h>

void separator();
int checkPrime(int n);

int main()
{
	int flag, n1, n2, i;
	
	printf("Введите 2 числа: ");
	scanf("%d %d", &n1, &n2);

	separator();

	for(i = n1 + 1;i<n2;++i)
	{
 		flag = checkPrime(i);

		if(flag==1)
			printf("%d ",i);
	}
	
	separator();

	return 0;
}

void separator()
{
	printf("\n");
	for(int i=0;i<80;++i)
		printf("=");
	printf("\n");
}

int checkPrime(int n)
{
	int j, flag = 1;

	for(j = 2;j<=n/2;++j)
	{
		if(n%j==0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
