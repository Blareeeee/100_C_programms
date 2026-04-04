// Является ли число числом Армстронга

#include<stdio.h>
#include<math.h>

int main()
{
	int n, n1, n2, cnt = 0, armstrong = 0;

	printf("Введите число: ");
	scanf("%d", &n);
	
	n1 = n;

	while(n!=0)
	{
		++cnt;
		n/=10;
	}
	
	n2 = n1;

	while(n1!= 0)
	{
		armstrong += pow(n1%10, cnt);
		n1 /= 10;
	}
	if(n2==armstrong)
		printf("Это число Армстронга");
	else
		printf("Это не число Армстронга");

	return 0;
}
