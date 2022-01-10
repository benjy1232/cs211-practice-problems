#include<stdio.h>

int main(void){
	int num;
	printf("Please enter a number: ");
	scanf("%i", &num);
	printf("The square of %i is %i\n", num, num * num);
	return 0;
}
