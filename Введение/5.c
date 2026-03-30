// Определение ASCII-значения символа

#include <stdio.h>

int main()
{
	char c;
	printf("Введите символ: ");
	scanf("%c", &c);
	printf("%c = %d", c, c);
	return 0;
}
