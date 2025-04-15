#include <stdio.h>

int main()

{

     int i, j, k, rows = 5;

     for (int i = 1; i <= rows; i++)
     {

          for (int j = i; j < rows; j++)
          { // Rows Loop

               printf(" "); // Blank Space
          }

          for (int k = 1; k <= i; k++)
          { // Cols Loop

               printf("*"); // Prints *
          }

          printf("\n");
     }

     for (int k = rows; k >= 1; k--)
     {

          for (int j = k; j <= rows; j++)
          { // Rows Loop

               printf(" "); // Prknts blank spaces
          }

          for (int l = 1; l < k; l++)
          { // Col Loop

               printf("*"); // prints * and blank space
          }

          printf("\n"); // New line
     }
}
