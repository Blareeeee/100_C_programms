// Программа для подсчета количества цифр и пробелов

#include<stdio.h>

int main()
{
	int i, total, digits, spaces;
	char line[150];

	total = digits = spaces = 0;

	printf("Введите строку: ");
	scanf("%[^\n]", &line);

	for(i=0; line[i]!='\0'; ++i)
	{
		if(line[i]>='0' && line[i]<='9')
		{
			++digits;
		}
		else if(line[i]==' ')
		{
			++spaces;
		}
		++total;
	}

	printf("Кол-во символов: %d \nКол-во цифр: %d \nКол-во пробелов: %d \n", total, digits, spaces);

	return 0;
}

