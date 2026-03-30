// Вычисляем сумму последовательного сложения натуральных чисел
// Используем цикл for

#include <stdio.h>

int main() {
	
	int i, n, sum = 0;
	
	printf("Введите число:");
	scanf("%d", &n);

	for(i = 1; i<=n; i++){
		sum +=i;
	}
	printf("%d", sum);
	return 0;
}
