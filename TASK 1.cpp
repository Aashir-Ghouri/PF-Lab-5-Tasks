#include <stdio.h>
int main(){
    char colour;
    printf("Enter traffic light colour : (r,y,g)\n");
    scanf("%c",&colour);

    if (colour=='r' || colour=='R'){
        printf("Stop!\n");
    }
    else {
        if (colour=='y' || colour=='Y'){
            printf("Caution!\n");
        }
        else {
            if (colour=='g' || colour=='G'){
                printf("Go!\n");
            }
            else {
                printf("Invalid colour.");
                return 0;
            }
        }
    }
    return 0;
}

