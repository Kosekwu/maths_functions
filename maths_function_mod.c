#include <stdio.h>

int mod (int x, int y){
	 return x % y == 0;
}

int main() 
{
	int x;
	int y;
	printf( "Please input two numbers to be added: " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	printf( "The product of your two numbers is %d\n", mod( x, y ) );
		 return 0;
}

