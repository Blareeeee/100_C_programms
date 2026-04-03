// Является ли число простым

#include<stdio.h>

int main()
{
	int n, i, flag = 0;

	printf("Введите число: ");
	scanf("%d", &n);

	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
			flag = 1;
	}
	if(flag==0)
		printf("простое");
	else
		printf("не является простым");

	return 0;
}
