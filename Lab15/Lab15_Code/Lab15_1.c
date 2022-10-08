#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct Jobs {
    char name[ 100 ] ;
    char job[ 100 ] ;
    float salary ;
} typedef Jobs ;

int openfile( Jobs[] ) ;
void result( Jobs[] , int ) ;
void show_max( Jobs[] , int , float , char [] ) ;

int main() {
   setlocale( LC_ALL , "" ) ;
   Jobs jobs[ 100 ] ;
   int total = openfile( jobs ) ;
   result( jobs , total ) ;    
   return 0 ;
}//end function

int openfile( Jobs jobs[] ){
   int index = 0 ;
   FILE *fptr ;
   fptr = fopen( "Salary.txt", "r" ) ;
   if( fptr == NULL ) {
       printf( "Error opening file salary.txt\n" );
       exit( 0 );
   } // End if
   char col1[ 100 ] , col2[ 100 ] , col3[ 100 ] , col4[ 100 ] , row2[ 100 ] ;
   fscanf( fptr , "%s %s %s %s", col1, col2, col3, col4 );
   while( fscanf(fptr , "%s %s %f %s\n" , jobs[ index ].name , row2 , &jobs[ index ].salary , jobs[ index ].job ) != EOF ) {
       index++ ;
   } // End while
   fclose( fptr ) ;
   return index ;
}//end function

void result( Jobs jobs[] , int total ) {
   float max_total = -1 ;
   char prefix_job[ 100 ][ 100 ] = { "Programmer" , "Support" , "Advisor" , "Founder" , "HR" } ;
   char jobs_title[ 100 ] ;
   for( int i = 0 ; i < 5 ; i++ ) {
       for( int j = 0 ; j < 100 ; j++ ) {
           if( prefix_job[ i ][ j ] == '\0' ) {
               jobs_title[ j ] = '\0';
               break;
           }
           jobs_title[ j ] = prefix_job[ i ][ j ] ;
       }
       show_max( jobs, total, max_total, jobs_title ) ;
   } // End for
}//end function

void show_max( Jobs jobs[] , int total , float most_total , char jobs_title[] ){
   char *name ;
   for( int i = 0 ; i < total ; i++ ) {
       if( strcmp( jobs[ i ].job, jobs_title ) == 0 ) {
           if( jobs[ i ].salary > most_total ) {
                most_total = jobs[ i ].salary ;
			    name = jobs[ i ].name ;
           } // End if
       } // End if
   } // End for
   printf( "%s: %s %'.1f bath\n" , jobs_title , name , most_total ) ;
}//end function