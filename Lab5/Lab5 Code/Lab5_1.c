#include <stdio.h>

int main() {
    int years;

    printf( "Input years : " ) ;
    scanf( "%d", &years ) ;
    if( years % 4 == 0 ){
        printf( "Feb = 29 days" ) ;
    } else {
        printf( "Feb = 28 days" ) ;
    }
    return 0 ;
}