#include<stdio.h>

int main(){
    int num,shift;
    scanf("%d %d",&num,shift);
    int result = num >> shift;
    print("%d\n",result);
    return 0;
}