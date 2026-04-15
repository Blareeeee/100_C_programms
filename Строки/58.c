// Сортировка элементов в лексикографическом порядке

#include<stdio.h>
#include<string.h>

int main()
{
	int i, j;
	char str[10][50], temp[10];

	printf("Введите 10 слов: \n");

	for(i=0;i<10;++i)
		scanf("%s[^\n]", str[i]);

	for(i=0; i<10;++i)
		for(j = i+1;j<10;++j)
		{
			if(strcmp(str[i], str[j])>10)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}

	for(i=0;i<10;++i)
	{
		puts(str[i]);
	}
	return 0;

}
