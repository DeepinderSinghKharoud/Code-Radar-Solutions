# include<stdio.h>

int main(){
    char grade;
    scanf("%c",&grade);

    switch (grade){
        case 'A':
         printf("Excellent\n");
         break;
        case 'B':
         printf("Good\n");
         break;
        case 'c':
         printf("Average\n");
         break;
        case 'd':
         printf("Below Average\n");
         break;
        case 'F';
          printf("Invalid grade\n");
        
    }
    return 0;
}