// Преобразование между двоичной и десятичной системами счисления

#include<stdio.h>
#include<math.h>

int BinToDic(long long n);
long long DicToBin(int n);

int main()
{
	long long n;
	printf("Введите двоичное число: ");
	scanf("%lld", &n);
	printf("%d \n", BinToDic(n));

	printf("Введите десятичное число: ");
	scanf("%d", &n);
	printf("%lld \n", DicToBin(n));
	
	return 0;
}

int BinToDic(long long n)
{
	int dec = 0, i = 0, remain;
	
	while(n!=0)
	{
		remain = n%10;
		dec += remain*pow(2,i);
		++i;
		n/=10;
	}
	return dec;
}

long long DicToBin(int n)
{
	long long bin = 0;
	int i = 1, remain;

	while(n!=0)
	{
		remain = n%2;
		bin += remain*i;
		i *= 10;
		n/=2;
	}
	return bin;
}


