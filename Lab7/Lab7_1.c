#include <stdio.h>

int main() {
    int number, check, i ;
    printf( "Input : " ) ;
    scanf( "%d", &number ) ;
    while( number > 0 ) {
        check = 0;
        i = 2 ;
        while( i <= number / 2 ) {
            if( number % i == 0 ) {
                check = 1 ;
                break ;
            }
            i++ ;
        }
        if( check == 0 && number != 1 ){
	        printf( "%d ", number ) ;
        }
        number-- ;
    }
}