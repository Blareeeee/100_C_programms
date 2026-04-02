// Вычисляем обратное число

#include<stdio.h>

int main()
{
	int n, remain, reversed=0;

	printf("Введите число: ");
	scanf("%d",&n);

	while(n!=0)
	{
		remain = n % 10;
		reversed = reversed*10 + remain;
		n/=10;
	}
	printf("%d",reversed);
	return 0;
}
