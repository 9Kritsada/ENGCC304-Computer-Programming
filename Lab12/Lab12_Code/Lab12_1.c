#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Employee {
    char Name[ 20 ] ;
    float Salary ;
    int Duration ;
} typedef Em ;

// Functions
void input_em( Em[], int ) ;
void sum_ave_salary( Em[], int ) ;
void max_salary( Em[], int ) ;

int main() {
    setlocale(LC_ALL,"") ; // 12000.00 -> 12,300.00
    
    int check = 1 ; 
    Em InputEm[ 1024 ] ;
    int len_em = 0 ;
    char input_check ;

    int i = 0 ;
    while ( check ) {
        printf( "Do you want to Enter Employee information? (y/n) : " ) ;
        scanf( " %c", &input_check ) ;
        switch ( input_check ) {
            case 'y' :
                input_em( InputEm, i ) ;
                len_em = i ;
                i++ ;
                break ; 
            case 'n' :
                check = 0 ;
                break ;
        } // End switch
    } // End while
    sum_ave_salary( InputEm, i ) ; 
    max_salary( InputEm, i ) ;

    return 0 ;
} // End function main()

void input_em( Em InputEm[], int i ){
    printf( "Employee Name : " ) ;
    getchar() ;
    gets( InputEm[ i ].Name ) ;
    printf( "Salary (Baht/Month) : " ) ;
    scanf( "%f", &InputEm[ i ].Salary ) ;
    printf( "Duration (Year) : " ) ;
    scanf( "%d", &InputEm[ i ].Duration ) ;
} // End function input_em()

void sum_ave_salary( Em InputEm[], int len_em ) {
    float sum_salary = 0 ;
    for( int i = 0 ; i < len_em ; i++ ) {
        sum_salary = sum_salary + InputEm[ i ].Salary ;
    }
    printf( "Average of Salary : %'.2f Baht\n", sum_salary / len_em ) ;
    printf( "Payment of every month : %'.2f Baht\n", sum_salary  ) ;
} // End function sum_ave_salary()

void max_salary( Em InputEm[], int len_em ) {
    int x = 0 ;
    int y = 0 ;
    int salary = 0 ;
    int max_salary_check = 0 ;
    for( int i = 0 ;i < len_em ; i++ ) {
        salary = InputEm[ i ].Salary ;
        x = max_salary_check < salary ;
        if( max_salary_check < salary ) {
            y = i ;
            max_salary_check = salary ; 
        } // End if
    } // End for i
    printf( "** Most salary in this business **\n" ) ;
    printf( "Name : %s (%d Years) \n", InputEm[ y ].Name, InputEm[ y ].Duration ) ;
    printf( "Salary : %'.2f Baht\n", InputEm[ y ].Salary ) ;
} // End function max_salary()