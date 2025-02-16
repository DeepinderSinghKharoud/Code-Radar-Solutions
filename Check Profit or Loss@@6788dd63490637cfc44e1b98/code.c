#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    if(a > b){
        printf("Profit\n");
    } else if(a == b){
        printf("No Profit No Loss");
    } else {
        printf("Loss");
    }
}