#include <stdio.h>

int div (int x, int y){
	 return x / y;
}

int main() 
{
	int x;
	int y;
	printf( "Please input two numbers to be divided : " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	printf( "The product of your two numbers is %d\n", div( x, y ) );
		 return 0;
}

