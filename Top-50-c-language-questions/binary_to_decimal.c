// #include <stdio.h>
// #include <math.h>

// int main()
// {
//      int N = 1111;
//      int i = 0;
//      int des = 0;
//      int rem;

//      while (N != 0)
//      {
//           rem = N % 10;
//           des = des + (rem * pow(2, i));
//           i++;
//           N = N / 10;
//      }
//      printf("%d", des);
// }


// In above We use math liberary and do but In Below We Do Without any liberary.


#include <stdio.h>

int main(){
    int N = 11011;
    
    int ans = 0;
    int a = 1;
    
    while(N != 0){
        ans = ans + (N % 10 ) * a;
        
        a = a * 2;
        N = N / 10; 
    }
    
    printf("%d" , ans);
}