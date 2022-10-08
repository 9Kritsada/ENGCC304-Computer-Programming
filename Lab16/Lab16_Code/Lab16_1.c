#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
   char name[100] ;
	int age ;
	float salary ;
	char job[100] ;
}typedef worker ;

int collector( worker [] ) ;
void sortAge( worker [] , int ) ;
void sortSalary( worker [] , int ) ;
void search( worker [] , int , int ) ;

int main() {
	int countL ;
	int searcher ;
	worker employee[ 100 ] ;
	countL = collector( employee ) ;
	printf( "Find Age : " ) ;
	scanf( "%d", &searcher ) ;
	sortAge( employee , countL ) ;
	sortSalary( employee , countL ) ;
	search( employee , countL , searcher ) ;
}// end function

int collector( worker take[] ) {
	int count = 0 ;
	FILE *fp ;
	fp = fopen( "Salary.txt", "r" ) ;
	if( fp == NULL ) {
		printf( "Error: Failed to open file" ) ;
		exit( 0 ) ;
	}
	fscanf( fp, "%s\t%s\t%s\t%s\n" , take[ 0 ].name , take[ 0 ].name , take[ 0 ].name , take[ 0 ].name ) ;
	
	for( int i = 0 ; i < 100 ; i++ ) {
		
		if(fscanf( fp, "%s\t%d\%f\t%s\n" , take[ i ].name , &take[ i ].age , &take[ i ].salary , take[ i ].job ) != EOF ) {
			count++ ;
		} else {
			break ;
		}	
	}
	fclose( fp ) ;
	return count ;
}// end function

void sortAge( worker data[] , int num_worker ) {
	worker holdTposi ;
	for( int i = 1; i < num_worker ; i++ ) {
		for( int j = 0 ; j < i ; j++ ) {
			if( data[ i ].age > data[ j ].age ){
				holdTposi = data[ i ] ;
				for( int k = i ; k > j ; k-- ) {
					data[ k ] = data[ k-1 ] ;
				}
				data[ j ] = holdTposi ;
				break ; 
			}
		}
		
	}
	printf( "\n\t\t" ) ;
	for( int c = 0 ;  c < 5 ; c++ ){
		printf( "%d\t", data[ c ].age ) ;
	}
	printf( "\n" ) ;
	printf( "Age( 99 - 0 )\t" ) ;
	for( int l = 0 ;  l < 5 ; l++ ) {
		printf( "%s\t", data[ l ].name ) ;
	}
	printf( "\n" ) ;
}// end function

void sortSalary( worker data[], int num_worker ) {
	worker holdTposi ; 
	for ( int i = 1; i < num_worker ; i++ ) {
		for ( int j = 0 ; j < i ; j++ ) {
			if( data[ i ].salary < data[ j ].salary ){
				holdTposi = data[ i ] ;
				for( int k = i ; k > j ; k-- ){
					data[ k ] = data[ k-1 ] ;
				}
				data[ j ] = holdTposi ;
				break ; 
			}
		}
	}
	printf( "\n\t\t\t" ) ;
	for (int c = 0 ;  c < 5 ; c++){
		printf( "%.f\t", data[ c ].salary ) ;
	}
	printf( "\n" ) ;
	printf( "Salary( 99999 - 0 )\t" ) ;
	for (int l = 0 ;  l < 5 ; l++){
		printf( "%s\t", data[ l ].name ) ;
	}
	printf( "\n" ) ;
}// end function

void search( worker data[], int num_worker, int founder ) {
	printf( "\nAge %d = ", founder ) ;
	for ( int i = 0 ; i < num_worker ; i++) {
		if( data[ i ].age == founder ){
			printf( "%s\t", data[ i ].name ) ;
		}
	}
}// end function