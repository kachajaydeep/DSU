// largest Number among Three numbers

#include <stdio.h>

int main()
{
     int a, b, c;
     printf("Enter The Three Numbers : \n");
     scanf("%d", &a);
     scanf("%d", &b);
     scanf("%d", &c);

     if (a > b && a > c)
     {
          printf("a is a Large Number");
     }
     else if (b > a && b > c)
     {
          printf("b is a Largest Number");
     }
     else
     {
          printf("c is a Largest Number");
     }
}