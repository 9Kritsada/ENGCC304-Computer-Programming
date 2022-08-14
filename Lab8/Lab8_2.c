#include <stdio.h>

int main() {
    int array[100], size, i, j, c ;

    printf( "Input Array Size : " );
    scanf( "%d", &size ) ;
    i = 0 ;
    while( i < size ){
        printf( "Array[ %d ] : ", i );
        scanf( "%d", &array[i] ) ;
        i++ ;
    } // end while
    printf("Unique = ");
    i = 0 ;
    while( i < size ){
        c = 0 ;
        j = 0;
        while( j < size ){
            if( i != j ){
                if( array[i] == array[j] ){
                    c = 1 ;
                } // end if
            } // end if
            j++ ;
        } // end while
        if( c == 0 ){
            printf( "%d ", array[i] ) ;
        } // end if
        i++ ;
    } // end while
    return 0 ;
} // end function main()