//C program to check positive negative or zero using switch case
#include <stdio.h>
int main(){
    int y,num;
    y=0;
    printf("Enter any number");
    scanf("%d",&num);
    switch(y<num){
        case 1:
        printf("the number is positive");
        break;
        case 0:
        switch(num<0){
            case 1:
        printf("the  number is negative");
        break;
        case 0:
        printf("the number is ZERO");
        }
    }
    return 0;
}