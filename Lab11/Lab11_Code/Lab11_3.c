 #include <stdio.h>

void DetectOperator( char[] ) ;
int GetResult( int, int ) ;

int main() {
   char input_arr[ 100 ] ;
   printf( "Input : " ) ;
   scanf( "%d %c %d", &input_arr[ 0 ], &input_arr[ 1 ], &input_arr[ 2 ] ) ;
   DetectOperator( input_arr ) ;
   return 0 ;
}

void DetectOperator( char input_arr[] ) {
   int input1 = input_arr[ 0 ] ;
   int input2 = input_arr[ 2 ] ;
   int answer = 0 ;
   switch ( input_arr[ 1 ] ) {
   case '+':
      answer = input1 + input2 ;
      GetResult( input1, answer ) ;
      break;
   case '-':
      answer = input1 - input2 ;
      GetResult( input1, answer ) ;
      break;
   case '*':
      answer = input1 * input2 ;
      GetResult( input1, answer ) ;
      break;
   case '/':
      answer = input1 / input2 ;
      GetResult( input1, answer ) ;
      break ;
   }
}

int GetResult( int input1, int answer ) {
   printf( "Result : %d", answer ) ;
}