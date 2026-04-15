// Поиск максимума с использованием динамического выделения памяти. Функция calloc()

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, num;
	float *data;

	printf("Введите количество элементов: ");
	scanf("%d", &num);

	data = (float*) calloc(num, sizeof(float));

	if(data == NULL)
	{
		printf("Ошибка выделения памяти:\n");
		exit(1);
	}

	printf("\n");

	for(i=0;i<num;++i)
	{
		printf("Введите элемент: ");
		scanf("%f", data+i);
	}
	
	for(i=1;i<num;++i)
	{
		if(*data<*(data+i))
			*data = *(data+i);
	}

	printf("%.2f",*data);
	return 0;
			
}
