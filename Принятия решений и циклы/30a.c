// Выводим числа Армстронга в заданном диапазоне

#include<stdio.h>
#include<math.h>

int main()
{
	int cnt, i, high, low, temp, temp1, temp2, armstrong;

	printf("Введите два числа: ");
	scanf("%d %d", &low, &high);

	while(low<high)
	{
		armstrong = 0;
		cnt = 0;
		temp = low;
		temp1 = low;
		temp2 = low;
		while(temp!=0)
		{
			++cnt;
			temp/=10;
		}
		
		while(temp1!=0)
		{
			armstrong += pow(temp1%10,cnt);
			temp1 /= 10;
		}
		if(temp2 == armstrong)
			printf("%d ", temp2);

		++low;
	}
	return 0;
}
