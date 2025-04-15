#include <stdio.h>

int main()
{
     int rows = 5;

     for (int i = 0; i <= rows; i++)
     {
          for (int j = rows; j >= i; j--)
          {
               printf(" ");
          }
          for (int k = 0; k <= i; k++)
          {
               printf("* ");
          }
          printf("\n");
     }

     for (int l = 0; l <= rows; l++)
     {
          for (int m = 0; m <= l; m++)
          {
               printf(" ");
          }

          for (int n = rows - 1; n >= l; n--)
          {
               printf(" *");
          }
          printf("\n");
     }
}