#include <stdio.h>

int main()
{
     int a = 2;
     int b = a + 1;

     if ((a = 3) == b)
     {
          printf("%d", a);
     }
     else
     {
          printf("%d", a + 1);
     }
}