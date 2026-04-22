// Запись предложения в файл

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char sentence[1000];
	FILE *fptr;

	fptr = fopen("text.txt", "w");
	if(fptr==NULL)
	{
		printf("Ошибка");
		exit(1);
	}

	printf("Введите предложение: ");
	scanf("%s", sentence);

	fprintf(fptr,"%s\n",sentence);
	fclose(fptr);

	return 0;
}
