#include <stdio.h>

int main() {
    int array[100], size, i, j, c ;
    
    printf( "Input Array Size : " );
    scanf( "%d", &size ) ;
    for( i = 0 ; i < size ; i++ ){
        printf( "Array[ %d ] : ", i );
        scanf( "%d", &array[i] ) ;
    } // end for
    printf("Unique = ");
    for( i = 0 ; i < size ; i++ ){
        c = 0 ;
        for( j = 0 ; j < size ; j++ ){
            if( i != j ){
                if( array[i] == array[j] ){
                    c = 1 ;
                } // end if
            } // end if
        } // end for
        if( c == 0 ){
            printf( "%d ", array[i] ) ;
        } // end if
    } // end for
    return 0 ;
} // end function main()