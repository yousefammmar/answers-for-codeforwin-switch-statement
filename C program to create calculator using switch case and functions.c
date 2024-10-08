//C program to create calculator using switch case and functions
#include <stdio.h>
int main (){
    int num1,num2,sum;
    char op;
    printf("enter the first number");
    scanf("%d",&num1);
        printf("enter the operation\n");
    scanf(" %c",&op);
    printf("enter the second number\n");
    scanf("%d",&num2);

    switch(op){
        case '+':
        sum=num1+num2;
        break;
        case '-':
        sum=num1-num2;
        break;
        case '*':
        sum=num1*num2;
        break;
        case '/':
        sum=num1/num2;
        
       
    }
     printf("the answer is=%d",sum);
    return 0;
}