// Храним информацию о студенте в структуре

#include<stdio.h>

struct student
{
	char name[10];
	int roll;
	int group;
} s;

int main()
{
	printf("Имя: ");
	scanf("%s", s.name);
	
	printf("Номер билета: ");
	scanf("%d", &s.roll);

	printf("Номер группы: ");
	scanf("%d", &s.group);

	printf("%s \n %d \n %d",s.name, s.roll,s.group);

	return 0;
}
