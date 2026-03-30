//Вычисляем размер int, float, double и char

#include <stdio.h>

int main()
{
	int integer;
	float fl;
	double dual;
	char c;

	printf("Размер int: %1d байт\n", sizeof(integer));
	printf("Размер float: %1d байт\n", sizeof(fl));
	printf("Размер double: %1d байт\n", sizeof(dual));
	printf("Размер char: %1d байт\n", sizeof(c));

	return 0;
}
