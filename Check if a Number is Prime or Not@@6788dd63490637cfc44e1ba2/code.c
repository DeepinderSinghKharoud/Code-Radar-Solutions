#include<stdio.h>
int main(){
    int num,isPrime = 1;
    scanf("%d",%num);
    if(num <= 1){
        printf("Not Prime\n");
        return 0;
    }
    for (i<2; i*i <= num; i++){
        if (num % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(is Prime)
        printf("Prime\n");
    
    else
        printf("Not Prime\n");
    return 0;
    
}