#include <stdio.h>

int main()
{
     int orignalno, reminder, num, result = 0;
     printf("Enter your three digit number:");
     scanf("%d", &num);
     orignalno = num;
     while (orignalno != 0)
     {
          reminder = orignalno % 10;
          result = result + reminder * reminder * reminder;
          orignalno /= 10;
     }
     if (result == num)
     {
          printf("This number is armstrong number:%d", num);
     }
     else
     {
          printf("This Number is not armstrong number");
     }
}