#include <stdio.h>
int main(){
	int review;
	printf("Enter review for the movie 'The Lion King'\n");
	scanf("%d",&review);
	if (review==1){
		printf("Terrible");
	}
	else{
		if (review==2){
			printf("Poor");
		}
		else{
			if (review==3){
				printf("Average");
			}
			else{
				if(review==4){
					printf("Good");
				}
				else{
					if (review==5){
						printf("Excellent");
					}
					else{
						printf("Invalid review");
					}
				}
			}
		}
	}
}
