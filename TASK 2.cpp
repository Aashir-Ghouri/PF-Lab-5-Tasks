#include <stdio.h>
int main(){
    int age;
    printf("Enter your age:\n");
    scanf("%d",&age);

    if (age < 0){
        printf("Invalid age");
    }
    else {
        if (age <= 12){
            printf("Child");
        }
        else {
            if (age <= 19){
                printf("Teenager");
            }
            else {
                if (age >= 30){
                    printf("Senior");
                }
                else {
                    printf("Adult");
                }
            }
        }
    }
    return 0;
}

