// Конвертируем восьмиричные числа в десятичные и наоборот

#include<stdio.h>
#include<math.h>

int DecToOct(int n);
long long OctToDec(int n);

int main()
{
	int n;

	printf("Введите десятичное число: ");
	scanf("%d", &n);
	printf("%d \n", DecToOct(n));

	printf("Введите восьмиричное число: ");
	scanf("%d",&n);
	printf("%lld", OctToDec(n));

	return 0;
}

int DecToOct(int n)
{
	int oct = 0, i = 1;

	while(n!=0)
	{
		oct += (n%8)*i;
		n/=8;
		i*=10;
	}
	return oct;
}

long long OctToDec(int n)
{
	int dec = 0, i=0;

	while(n!=0)
	{
		dec += (n%10)*pow(8,i);
		++i;
		n/=10;
	}
	return dec;
}
