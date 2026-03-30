// Проверяем, является ли число отрицательным или положительным

#include <stdio.h>

int main() 
{
	int n;

	printf("Введите число: ");
	scanf("%d", &n);

	if (n <= 0)
		{
			if (n == 0)
				printf("Вы ввели 0");
			else
				printf("Отрицательное");
		}
		else
			printf("Положительное");
	return 0;	
}
