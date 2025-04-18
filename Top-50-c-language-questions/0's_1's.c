#include <stdio.h>
#include <math.h>

int main()
{
     int ans = 0;
     int i = 0;
     int N = 102301;

     while (N != 0)
     {
          if (N % 10 == 0)
          {
               ans += 1 * pow(10, i);
          }
          else
          {
               ans = ans + (N % 10) * pow(10, i);
          }
          N = N / 10;
          i++;
     }
     printf("%d", ans);
}