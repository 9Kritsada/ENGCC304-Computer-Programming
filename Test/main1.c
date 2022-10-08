#include <stdio.h>

int main() {
   int A = 5, *X, **Y;
   X = &A ;
   Y = &X ;

   printf("%d %d %d\n", A, *X, **Y);
   0;
}