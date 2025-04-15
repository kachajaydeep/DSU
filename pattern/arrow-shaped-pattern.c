#include <stdio.h>
int rows = 5;
int main()
{
     for (int i = 1; i <= rows; i++)
     {
          for (int j = 1; j <= i; j++)
          {
               printf(" *");
          }
          printf("\n");
     }

     for (int k = 1; k <= rows - 1; k++)
     {
          for (int n = rows - 1; n >= k; n--)
          {
               printf(" *");
          }
          printf("\n");
     }
}