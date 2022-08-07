#include <stdio.h>

int main () {
    int i, j, line ;

    printf( " input your line : " ) ;
    scanf( "%d", &line ) ;

    if( line % 2 == 0 ) {
        for( i = 1 ; i <= line ; i++ ) {
            for( j = line-1 ; j >= i ; j-- ) {
                printf(" ") ;
            } // End for
            for( j = 1 ; j <= i ; j++ ) {
                printf("* ") ;
            } // End for
            printf( "\n" );
        } // End for
    } else {
        for( int i = 1 ; i <= line ; i++ ) {
            for( j = 2 ; j <= i ; j++ ) {
                printf(" ") ;
            } // End for
            for( j = line ; j >= i ; j-- ) {
                printf("* ") ;
            } // End for
            printf( "\n" ) ;
        } // End for
    } // End if
    return 0;
}