// Proverka chisla na chetnost'

#include<stdio.h>

int main()
{
	int number;

	printf("Vvedite chislo: ");
	scanf("%d",&number);

	if(number%2==0)
		printf("chetnoe");
	else
		printf("nechetnoe");
	return 0;
}
