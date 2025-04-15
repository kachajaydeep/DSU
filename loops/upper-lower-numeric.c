#include <stdio.h>

int main()
{
     char ch;
     printf("Enter any thing you wan't : \n");
     scanf("%c", &ch);

     if (ch >= 'a' && ch <= 'z')
     {
          printf("You Selected Lower Alphabet");
     }
     else if (ch >= 'A' && ch <= 'Z')
     {
          printf("You are Selected Upper AlphaBets");
     }
     else
     {
          printf("You are Selected Numeric");
     }
}