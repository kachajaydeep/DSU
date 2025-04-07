#include <stdio.h>

int main(){
     int myAge = 23;
     int *ptr = &myAge;
     printf("%d\n", myAge);
     printf("%p\n", &myAge);
     printf("%p\n", ptr);
}

//There are two Methods to Declare an Pointer
//int *ptr = &myAge;
//int* ptr = &myAge;