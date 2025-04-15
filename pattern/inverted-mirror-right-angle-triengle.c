// #include <stdio.h>

// int main()
// {
//      int rows = 5;
//      for (int i = rows; i >= 1; i--)
//      {
//           for (int j = rows; j > i; j--)
//           {
//                printf(" ");
//           }

//           for (int k = 1; k <= i; k++)
//           {
//                printf("*");
//           }
//           printf("\n");
//      }
// }

// another method.

#include <stdio.h>

int main()
{
     int rows = 5;
     for (int i = 0; i <= rows; i++)
     {
          for (int j = 0; j <= i; j++)
          {
               printf(" ");
          }
          for (int k = rows; k >= i; k--)
          {
               printf("*");
          }
          printf("\n");
     }
}