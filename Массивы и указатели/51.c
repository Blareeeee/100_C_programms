// Своп чисел в циклическом порядке с помощью вызова по ссылке

#include<stdio.h>

void Swap(int *a, int *b, int *c);

int main()
{
	int a, b, c;

	printf("Введите 3 числа: ");
	scanf("%d %d %d", &a,&b,&c);

	Swap(&a,&b,&c);

	printf("%d %d %d",a,b,c);

	return 0;
}

void Swap(int *a, int *b, int *c)
{
	int temp;
	
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}
