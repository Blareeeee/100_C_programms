// Как работает ключевое слово long

#include <stdio.h>

int main()
{
	int a;
	long b;
	long long c;

	double e;
	long double f;

	printf("Размер int = %1d байт \n", sizeof(a));
	printf("Размер long = %1d байт \n", sizeof(b));
	printf("Размер long long = %1d байт \n", sizeof(c));
	printf("Размер double = %1d байт \n", sizeof(e));
	printf("Размер long double = %1d байт \n", sizeof(f));

	return 0;
}
