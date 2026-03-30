// Является ли год високосным

#include <stdio.h>

int main(){
	
	int year;
	printf("Введите год: ");
	scanf("%d", &year);

	if (year%4==0) {
		if (year%100==0) {
			if (year%400==0)
				printf("Високосный\n");
			else
				printf("Невисокосный\n");
		}	
		else
			printf("Високосный\n");
	}
	else
		printf("Невисокосный\n");
	
	return 0;
}
