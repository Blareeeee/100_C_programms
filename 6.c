// Вычисляем частное и остаток

#include <stdio.h>

int main()
{
	int delimoe, delitel, chastnoe, ostatok;
	printf("Введите делимое: ");
	scanf("%d", &delimoe);
	printf("Введите делитель: ");
	scanf("%d", &delitel);
	chastnoe = delimoe / delitel;
	ostatok = delimoe % delitel;
	printf("Частное: %d\n", chastnoe);
	printf("Остаток: %d\n", ostatok);
	return 0;
}
