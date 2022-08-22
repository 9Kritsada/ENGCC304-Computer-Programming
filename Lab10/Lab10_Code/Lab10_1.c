#include <stdio.h>
#include <string.h>

int main(){
    char name[ 100 ] ;
    int count, i ;

    // input
    printf( "Input : " ) ;
    gets( name ) ;

    // Process
    count = strlen( name ) ;
    for( i = count ; i >= 0 ; i-- ) {
        printf( "%c", name[ i ] ) ;
    } // end for
    return 0 ;
} // end function main()