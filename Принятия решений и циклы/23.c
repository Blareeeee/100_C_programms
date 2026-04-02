// Подсчитываем количество цифр целого числа

#include<stdio.h>

int main()
{
	long long n;
	int cnt=0;

	printf("Введите число: ");
	scanf("%lld",&n);

	while(n!=0)
	{
		n /= 10;
		++cnt;
	}
	printf("%d", cnt);
	return 0;
}
