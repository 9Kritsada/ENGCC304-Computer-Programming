#include <stdio.h>

int plusVal( int x, int y ) {
   printf( "%d", x + y ) ;
}

int main() {
   int x = 5 ;
   int y = 10 ;
   plusVal( x, y ) ;
   return 0 ;
}