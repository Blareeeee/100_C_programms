// Проверка простого числа или числа армстронга с использованием пользовательской функции

#include<stdio.h>
#include<math.h>

int checkPrime(int n);
int checkArmstrong(int n);

int main()
{
	int n, flag;

	printf("Введите число: ");
	scanf("%d", &n);

	flag = checkPrime(n);
	if(flag==1)
		printf("Число простое\n");
	else
		printf("число не простое\n");

	flag = checkArmstrong(n);
	if(flag==1)
		printf("Число Армостронга");
	else
		printf("Не является числом Армстронга");

	return 0;
}

int checkPrime(int n)
{
	int i, flag = 1;

	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}

int checkArmstrong(int n)
{
	int cnt = 0, flag, armstrong = 0, temp;

	temp = n;

	while(temp!=0)
	{
		temp/=10;
		++cnt;
	}
	
	temp = n;

	while(temp!=0)
	{
		armstrong+=pow(temp%10,cnt);
		temp/=10;
	}
	if(n==armstrong)
		flag = 1;
	else
		flag = 0;

	return flag;
}










