// Конвертируем двоичные числа в восьмиричные и наоборот

#include<stdio.h>
#include<math.h>

int BinToOct(long long n);
long long OctToBin(int n);

int main()
{
	long long n;
	int n1;

	printf("Введите двоичное число: ");
	scanf("%lld", &n);
	printf("%d \n", BinToOct(n));

	printf("Введите восьмиричное число: ");
	scanf("%d", &n1);
	printf("%lld",OctToBin(n1));

	return 0;
}

int BinToOct(long long n)
{
	int i = 0, dec = 0, oct =0;

	while(n!=0)
	{
		dec += (n%10)*pow(2,i);
		++i;
		n/=10;
	}

	i = 1;

	while(dec!=0)
	{
		oct += (dec%8) * i;
		i *= 10;
		dec/=8;
	}
	return oct;
}

long long OctToBin(int n)
{
	int i = 0, dec = 0;
	long long bin = 0;

	while(n!=0)
	{
		dec += (n%10)*pow(8,i);
		++i;
		n/=10;
	}

	i=1;

	while(dec!=0)
	{
		bin += (dec%2) * i;
		i *= 10;
		dec/=2;
	}
	return bin;
}







