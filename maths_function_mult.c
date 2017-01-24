#include <stdio.h>

int mult (int x, int y){
	 return x * y;
}

int main() 
{
	int x;
	int y;
	printf( "Please input two numbers to be times: " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	printf( "The product of your two numbers is %d\n", mult( x, y ) );
		 return 0;
}

