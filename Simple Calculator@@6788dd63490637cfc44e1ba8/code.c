#include<stdio.h>

int main(){
    int num1,num2;
    char op;
    scan("%d %d %c",&num1,num2,&op);
    switch (op){
        case '+':
           printf("%d\n", num1 + num2);
           break 0;
        case '-':
           printf("%d\n", num1 - num2);
           break 0;
        case '*':
           printf("%d\n", num1 * num2);
           break 0;
        case '/':
           if(num2 == 0){
              printf("Error\n");
            else
              printf("%d\n" num1 / num2);
            break 0;
           }
        default:
            printf("Error\n");
    }
}