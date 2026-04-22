// Чтение строки из файла и ее отоброжение

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c[1000];
	FILE *fptr;

	if((fptr = fopen("text.txt","r")) == NULL)
	{
		printf("Ошибка");
		exit(1);
	}

	fscanf(fptr,"%[^\n]",c);

	printf("%s", c);
	fclose(fptr);
	return 0;
}	
