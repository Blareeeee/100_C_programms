// Является ли число палиндромом

#include<stdio.h>

int main()
{
	int n,n1, reverse=0, remain;

	printf("Введите число: ");
	scanf("%d", &n);
	n1 = n;
	
	while(n!=0)
	{
		remain = n % 10;
		reverse = reverse*10 + remain;
		n/=10;
	}
	if(n1 == reverse)
		printf("Число палиндром");
	else
		printf("Число не палиндром");
	return 0;
}
