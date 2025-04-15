#include <stdio.h>

int main()
{
     int rows = 5;
     for (int i = 0; i <= rows - 1; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf(" ");
          }
          for (int k = rows - 1; k >= i; k--)
          {
               printf(" *");
          }
          printf("\n");
     }

     for (int l = 1; l <= rows - 1; l++)
     {
          for (int m = rows; m >= l; m--)
          {
               printf(" ");
          }
          for (int n = 0; n <= l; n++)
          {
               printf("* ");
          }
          printf("\n");
     }
}