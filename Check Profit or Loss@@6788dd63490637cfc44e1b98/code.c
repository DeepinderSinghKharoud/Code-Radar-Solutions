#include<stdio.h>
int main(){
    int costprice, sellingprice;
    scanf("%d",&costprice,&sellingprice);
    if(costprice > sellingprice ){
        printf("Loss\n");
    } else if(sellingprice > costprice){
        printf(" Profit\n");
    } else {
        printf("No Profit No Loss\n");
    }
}