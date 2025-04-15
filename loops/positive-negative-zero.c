/*
#include<stdio.h>

int main(){
    int a;
    printf("Enter The Number: \n");
    scanf("%d", &a);
    
    if(a > 0){
        printf("a is a positive Number");
    }
    else{
        if(a < 0){
            printf("a is a Negative Number");
        }
        else{
            printf("a is a 0");
        }
    }
}
*/


// Please Please! Not Write a Code a according to below the section not a above commented code! because it decrease optimality.


#include <stdio.h>

int main()
{
     int a;
     printf("Enter The Number : ");
     scanf("%d", &a);

     if (a > 0)
     {
          printf("a is a positive Number");
     }
     else if (a < 0)
     {
          printf("a is a Negative Number");
     }
     else
     {
          printf("a is a 0");
     }
}