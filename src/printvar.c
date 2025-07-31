/* printvar.c */
#include <stdio.h>
int main(void) {
	char name[20]="fria";
	int age=16;
	float grade=2.75;
	printf("name: %s age: %d grade: %.2f\n",name,age,grade);
	return 0;
}
