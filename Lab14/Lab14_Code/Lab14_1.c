#include <stdio.h>
#include <string.h>
struct Employee {
    char Name[ 20 ] ;
    int  Age ;
    int  Salary ;
    char Job[ 20 ] ;
} typedef Em ;

void DefineEm( Em[] ) ;
void ShowSingleEm( Em[], int, int ) ;
int ShowOldest( Em[], int ) ;
int ShowLowSalary( Em[], int ) ;

int main() {
    int n = 7 ;
    Em A[ n ] ;
    DefineEm( A ) ;
    ShowSingleEm( A, ShowOldest( A, n ), ShowLowSalary( A, n ) ) ;
    return 0 ;
}//end function
void DefineEm( Em InputEm[] ) {
    strcpy( InputEm[ 0 ].Name, "Pong" ) ;
    strcpy( InputEm[ 1 ].Name, "Som" ) ;
    strcpy( InputEm[ 2 ].Name, "Aoy" ) ;
    strcpy( InputEm[ 3 ].Name, "Ying" ) ;
    strcpy( InputEm[ 4 ].Name, "Yot" ) ;
    strcpy( InputEm[ 5 ].Name, "Pot" ) ;
    strcpy( InputEm[ 6 ].Name, "Vip" ) ;
    
    InputEm[ 0 ].Age = 36 ;
    InputEm[ 1 ].Age = 25 ;
    InputEm[ 2 ].Age = 24 ;
    InputEm[ 3 ].Age = 26 ;
    InputEm[ 4 ].Age = 28 ;
    InputEm[ 5 ].Age = 31 ;
    InputEm[ 6 ].Age = 25 ;
    
    InputEm[ 0 ].Salary = 45000 ;
    InputEm[ 1 ].Salary = 23000 ;
    InputEm[ 2 ].Salary = 33250 ;
    InputEm[ 3 ].Salary = 34550 ;
    InputEm[ 4 ].Salary = 50000 ;
    InputEm[ 5 ].Salary = 24500 ;
    InputEm[ 6 ].Salary = 25450 ;
    
    strcpy( InputEm[ 0 ].Job, "Programmer" ) ;
    strcpy( InputEm[ 1 ].Job, "Support" ) ;
    strcpy( InputEm[ 2 ].Job, "Advis" ) ;
    strcpy( InputEm[ 3 ].Job, "Programmer" ) ;
    strcpy( InputEm[ 4 ].Job, "Founder" ) ;
    strcpy( InputEm[ 5 ].Job, "HR" ) ;
    strcpy( InputEm[ 6 ].Job, "Programmer" ) ;
}//end function

void ShowSingleEm( Em InputEm[], int Pos, int Po ) {
    printf( "Oldest = %s (%d) %s\n", InputEm[ Pos ].Name, InputEm[ Pos ].Age, InputEm[ Pos ].Job ) ;
    printf( "Low Salary = %s (%d) %d %s\n", InputEm[ Po ].Name, InputEm[ Po ].Age, InputEm[ Po ].Salary, InputEm[ Po ].Job ) ;
}//end function

int ShowOldest( Em InputEm[], int n ) {
    int Max = -99999 ;
    int Pos = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( InputEm[ i ].Age > Max ) {
            Max = InputEm[ i ].Age ;
            Pos = i ;
        }//end if
    }//end for
    return Pos ;
}//end function

int ShowLowSalary( Em InputEm[], int n ) {
    int min = 99999 ;
    int Po = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( InputEm[ i ].Salary < min ) {
            min = InputEm[ i ].Salary ;
            Po = i ;
        }//end if
    }//end for
    return Po ;
}//end function