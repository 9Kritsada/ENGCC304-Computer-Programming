#include <stdio.h>

int plusVal( int x, int y ) {
   return x + y;
}

int main() {
   int x = 5 ;
   int y = 10 ;
   printf( "%d", plusVal( x, y ) );
   return 0 ;
}