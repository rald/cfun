/* scanvar.c */
#include <stdio.h>
int main(void) {
	char name[20];
	int age;
	float grade;

	printf("Input name: ");
	scanf("%s",name);

	printf("Input age: ");
	scanf("%d",&age);

	printf("Input grade: ");
	scanf("%f",&grade);

	printf("Name: %s\nAge: %d\nGrade: %.2f\n",name,age,grade);

	return 0;
}
