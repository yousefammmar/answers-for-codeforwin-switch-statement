//C program to check even or odd number using switch case
#include <stdio.h>
int main (){
    int num,mod;
    printf("enter any number \n");
    scanf("%d",&num);
    mod=num%2;
    switch(mod){
        case 0:
        printf("%d is even",num);
        break;
        default:
        printf("%d is odd",num);
    }
    return 0;
}