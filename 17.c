//Проверяем, является ли символ алфавитным или нет

#include <stdio.h>

int main() {
	char c;

	printf("Введите символ: ");
	scanf("%c", &c);

	if ((c>='a' && c<='z') || (c>='A' && c>='Z'))
		printf("Алфавитный");
	else
		printf("Не алфавитный");

	return 0;
}
