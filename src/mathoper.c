/* mathoper.c */
#include <stdio.h>
int main(void) {

	float grade1, grade2, grade3;
	float ave;

	printf("input grade 1 :");
	scanf("%f",&grade1);

	printf("input grade 2 :");
	scanf("%f",&grade2);

	printf("input grade 2 :");
	scanf("%f",&grade3);

	ave=(grade1+grade2+grade3)/3;

	printf("Average grade: %.2f\n",ave);

	return 0;
}
