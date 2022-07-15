#include <stdio.h>

int main() {
    char employees_id[10] ;
    int working_time ;
    float salary_amount_hr ;
    float salary_amount_day ;
    printf( "Input the Employees ID (Max. 10 chars) : " ) ;
    scanf( "%s", &employees_id ) ;
    printf( "Input the working hrs : " ) ;
    scanf( "%d", &working_time ) ;
    printf( "Salary amount/hr (baht) : " ) ;
    scanf( "%f", &salary_amount_hr ) ;

    salary_amount_day = working_time * salary_amount_hr ;

    printf( "Expected Output : \n" ) ;
    printf( "Employees ID : %s \n", employees_id ) ;
    printf( "Expected Output : %.2f Baht(s) \n", salary_amount_day ) ;
    return 0 ;
}