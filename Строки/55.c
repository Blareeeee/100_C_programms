// Определение длины строки
 
#include<stdio.h>

int main()
{
	char s[1000], i;

	printf("Ввкдите строку: ");
	scanf("%s",s);

	for(i=0;s[i]!='\0';++i);

	printf("%d",i);
	return 0;
}
