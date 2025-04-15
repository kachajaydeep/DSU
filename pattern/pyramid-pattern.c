#include <stdio.h>

int main()
{
     int rows = 5;
     for (int i = 0; i < rows; i++)
     {
          for (int j = rows - i; j > 1; j--)
          {
               printf(" ");
          }
          for (int k = 0; k <= i; k++)
          {
               printf("* ");
          }
          printf("\n");
     }
}