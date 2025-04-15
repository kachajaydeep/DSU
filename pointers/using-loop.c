#include <stdio.h>

int main()
{
     int myNumbers[4] = {0, 20, 25, 50};
     int i;

     for (i = 0; i < 4; i++)
     {
          printf("%p\n", &myNumbers[i]);
     }
}

//Entire array takes (4 * 4) = 16bytes of memory address.