#include<stdio.h>

int main(){
    int num ;
    scanf("%d",&num);
    if(num > 0){
        print("%dPositive\n");
    }
    else if(num < 0){
        printf("%dNegative\n");
    } else{
        printf("%dZero");
    }
}