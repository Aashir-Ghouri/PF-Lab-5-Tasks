#include <stdio.h>
int main(){
	int limit=500;
	int amount;
	printf("enter amount to withdraw\n");
	scanf("%d",&amount);
	if (amount <= limit && amount % 20 ==0){
		printf("Withdrawal approved!\n");
	}
	else{
		printf("Withdrawal denied!\n");
	}
	return 0;
}
