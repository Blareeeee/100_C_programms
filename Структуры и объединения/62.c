//Вычесление разницы между двумя периодами времени

#include<stdio.h>

struct TIME
{
	int sec;
	int min;
	int h;
};

void diffTime(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
	struct TIME start, stop, diff;
	
	printf("Введите время прибытия: ");
	scanf("%d %d %d", &start.h, &start.min, &start.sec);
	printf("Введите время прибытия: ");
	scanf("%d %d %d", &stop.h, &stop.min, &stop.sec);

	diffTime(start,stop,&diff);

	printf("%d %d %d", diff.h, diff.min, diff.sec);
	return 0;
}


void diffTime(struct TIME start, struct TIME stop, struct TIME *diff)
{
	if(stop.sec > start.sec){
		--start.sec;
		start.min +=60;
	}

	diff->sec = start.sec - stop.sec;
	if(stop.min > start.min){
	--start.h;
	start.min += 60;
	}

	diff->min = start.min -stop.min;
	diff->h = start.h - stop.h;
}
