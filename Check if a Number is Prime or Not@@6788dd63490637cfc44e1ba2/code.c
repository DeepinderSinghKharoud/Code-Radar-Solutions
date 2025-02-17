#include<stdio.h>

  int isPrime(int num){
    if (num <= 1)
    return 0;
    if (num == 2)
    return 1;

    for (int i = 2; i * i <= num; i++) {
        if ( num % i ==0)
           return 0;
    }
    return 1;
  }
  
  int main(){
    int num;
    scanf("%d",&num);
    if (isPrime(num))
      printf("Prime\n");
    else
      printf("Not Prime\n");
  
  return 0;
  }