//  Удаляем все символы в строке, кроме цифровых

#include<stdio.h>



int main()
{
	int i,j=0;
	char line[150],result[150];

	printf("Введите строку: ");
	fgets(line, sizeof(line), stdin);

	for(i=0;line[i] !='\0';i++)
	{
		if(line[i]>='0' && line[i]<='9')
		{
			result[j++] = line[i];	
		}
	}
	result[j] = '\0';

	puts(result);
	return 0;

}
