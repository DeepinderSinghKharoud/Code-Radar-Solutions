#include<stdio.h>

int main(){
    scanf("%d %d",&num,&shift);
    int result = num << shift;
    printf("%d\n",result);
    return 0;
}