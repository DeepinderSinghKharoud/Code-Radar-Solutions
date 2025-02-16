#include<stdio.h>
int main(){
    int costprice, sellingprice;
    scanf("%d %d",&costprice,&sellingprice);
    if(sellingprice > costprice ){
        printf("Profit\n");
    } else if(sellingprice < costprice){
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
}