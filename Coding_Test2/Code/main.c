#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_user {
   char name[ 100 ] ;
   char date[ 100 ] ;
   int years_old ;
   int month ;
} typedef data ; 

int read_file( data[] ) ;
void calculate_age( data[], int ) ;
void max_min_age_user( data[], int ) ;

int main() {
   int n = 100 ;
   data user[ n ] ;
   int count_data = read_file( user ) ;
   for( int i = 0 ; i < count_data ; i++ ) {
      calculate_age( user, i ) ;
      printf( "%s %d Years, %d Months\n", user[ i ].name, user[ i ].years_old, user[ i ].month ) ;
   } // end for i
   max_min_age_user( user, count_data ) ;
   return 0 ;
} // End main() function

int read_file( data user[] ) {
   char t1[ 20 ], t2[ 20 ], t3[ 20 ] ;
   FILE *fp = fopen( "a.txt", "r" ) ;
   if ( fp == NULL ) {
      printf( "Error opening" ) ;
      exit( 1 ) ; // Exit function
   } // end if
   fscanf( fp, "%s %s %s", t1, t2, t3 ) ;
   int i = 0 ;
   while( fscanf( fp, "%s %s %s", t1, user[i].name, user[i].date ) != EOF ) { // EOF => End of file
      i++ ;
   } // end while
   fclose( fp ) ;
   return i ;
} // End file() function

void calculate_age( data user[], int i ) {
   int year_end = 2018, month_end = 6, day_end = 21 ;
   
   char * token = strtok( user[ i ].date, "-" ) ;
   int count = 0 ;
   while( token != NULL ) {
      int data = atoi( token ) ;
      if( count == 0 ) {
         user[ i ].years_old = year_end - data ;
      } else if( count == 1 ) {
         user[ i ].month = abs( month_end - data ) ;
         if( month_end < data ) {
            user[ i ].years_old-- ;
            user[ i ].month = 12 - user[ i ].month ;
         }
      } else if( count == 2 ) {
         if ( day_end < data ) {
            user[ i ].month-- ;
         }
      } // end if
      count++ ;
      token = strtok( NULL, "-" ) ;
   } // end while
} // end calculate_age() function

void max_min_age_user( data user[], int count_data ) {
   int max_i = 0, min_i = 0 ;
   int check_max = 0, check_min = 99999 ;
   for( int i = 0 ; i < count_data ; i++ ) {
      int sum_age = user[ i ].years_old ;
      if( sum_age > check_max ) {
         max_i = i ;
         check_max = sum_age ;
      } else if( sum_age < check_min ) {
         min_i = i ;
         check_min = sum_age ;
      }
   } // end for i
   printf( "Max : %s (%d Years, %d Months) \n", 
      user[ max_i ].name, user[ max_i ].years_old, user[ max_i ].month ) ;
   printf( "Min : %s (%d Years, %d Months) \n", 
      user[ min_i ].name, user[ min_i ].years_old, user[ min_i ].month ) ;
} // end max_min_age_user() function