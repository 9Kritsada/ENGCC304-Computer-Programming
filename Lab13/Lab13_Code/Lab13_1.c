#include<stdio.h>
#include<string.h>

struct Employess {
	char name[ 100 ] ;
	float salary ;
} typedef EM ;

int main() {
	EM em_data[ 100 ] ;
	char *name ;
	int check_in = 1 ;
	char check[ 100 ] = "-1" ;

	int data_i = 0 ;
   for( ; check_in != 0 ; data_i++ ) {
      printf( "Employee %d's Name : ", data_i + 1 ) ;
		scanf( "%s", em_data[ data_i ].name ) ;
		name = em_data[ data_i ].name ;
		check_in = strcmp( name , check ) ;
		if ( check_in == 0) {
			break ;
		}
		
		printf( "Salary (Bath/Month) : " ) ;
		scanf( "%f", &em_data[ data_i ].salary ) ;
   }

	float *tomoney ;
	float sum = 0 ;
	float max = -99999 ;
	for ( int i = 0 ; i < data_i ; i++ ) {
		sum = sum + em_data[ i ].salary ;
		if ( em_data[i].salary > max ) {
			max = em_data[ i ].salary ;
			name = em_data[ i ].name ;
			tomoney = &( em_data[ i ].salary ) ;
		}
	}
	printf( "------------------------------------------\n") ;
	printf( "All salary per month : %.2f Bath\n", sum ) ;
	printf( "All salary per year : %.2f Bath\n", sum * 12 ) ;
	printf( "Tax (7%% per year) : %.2f Bath\n", sum * 12 * 7 / 100 ) ;
	printf( "Most tax in company : %s ( %.2f Bath per year)", name, *tomoney * 12 * 7 / 100 ) ;
}