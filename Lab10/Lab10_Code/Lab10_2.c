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
    i = count ;
    while ( i >= 0 ) {
        printf( "%c", name[i] ) ;
        i-- ;
    } // end while
    return 0 ;
} // end function main()