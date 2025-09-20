#include <stdio.h>
int main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if (num % 3==0 && num % 5==0){
		printf("Valid number");
	}
	else{
		printf("Invalid number");
	}
	return 0;
}
