#include <stdio.h>

void leap_year(int year)
{
     if (year % 400 == 0 || year % 4 == 0)
     {
          printf("%d is a Leap year.\n ", year);
     }
     else
     {
          printf("%d is Not Leap year.\n", year);
     }
}

int main()
{
     leap_year(scanf("%d", &year));
     leap_year(2002);
     leap_year(2008);
}