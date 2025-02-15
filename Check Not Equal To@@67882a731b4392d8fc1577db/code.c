#include<stdio.h>

int main(){
    int a,b;
    scan("%d %d",&a,&b);
    if(a!=b){
        print("True\n");
    } else{
        print("False\n");
    }
    return 0;
}