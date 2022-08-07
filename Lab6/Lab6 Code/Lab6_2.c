#include<stdio.h>

int main() {
    int i,j, line ;
    printf("Input your line : ") ; 
    scanf("%d",&line );
    for( i = 1 ; i <= line ; i++ ) {
        for( j = 2 ; j <= i ; j++ ){
            printf(" ");
        } // End for
        for ( j = line ; j >= i ; j-- ) {
            printf("*");
        } // End for
        printf("\n");
        
    } // End for
    return 0 ;
}

