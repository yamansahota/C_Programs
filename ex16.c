#include<stdio.h>
 
int Fibonacci_Series(int);
 
int main()
{
   	int Number, Fibonacci;
 
   	printf("\n  Enter the Number to find Nth Fibonacci Number :  ");
   	scanf("%d", &Number);
   
   	Fibonacci = Fibonacci_Series(Number);
   	
	printf("\n %d Fibonacci Number = %d", Number, Fibonacci);
    return 0;
}
 
int Fibonacci_Series(int Number)
{
   	if ( Number == 0 )
    	return 0;
   	else if ( Number == 1 )
    	return 1;
   	else
    	return ( Fibonacci_Series(Number - 1) + Fibonacci_Series(Number - 2) );
}