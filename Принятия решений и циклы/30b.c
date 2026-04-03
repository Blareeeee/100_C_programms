// Выводим числа Армстронга в заданном диапазоне

#include<stdio.h>
#include<math.h>

int main()
{
        int cnt=0, i, high, low, temp1, temp2, armstrong=0;

        printf("Введите два числа: ");
        scanf("%d %d", &low, &high);
	
	for(i = low + 1; i < high; ++i)
        {
                temp1 = i;
                temp2 = i;
                while(temp1!=0)
                {
                        ++cnt;
                        temp1/=10;
                }

                while(temp2!=0)
                {
                        armstrong += pow(temp2%10,cnt);
                        temp2 /= 10;
                }
                if(i == armstrong)
                        printf("%d ", i);

                cnt = 0;
		armstrong = 0;
        }

	return 0;
}
