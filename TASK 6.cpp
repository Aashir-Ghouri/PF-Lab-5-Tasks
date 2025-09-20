#include <stdio.h>
int main(){
	int num1;
	int num2;
	int max;
	printf("Enter two numbers to find out the greater one:");
	scanf("%d %d",&num1, &num2);
	max= (num1>num2) ? num1:num2;
	printf("%d is greater.",max);
	return 0;
}
