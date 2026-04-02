// Вычисляем степень числа

#include<stdio.h>

int main()
{
	int base, exponent;
	long long result=1;

	printf("Введите число: ");
	scanf("%d",&base);
	printf("Введите степень: ");
	scanf("%d",&exponent);

	while(exponent!=0)
	{
		result*=base;
		exponent-=1;
	}
	printf("%d", result);
	return 0;
}
