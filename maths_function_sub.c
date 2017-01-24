#include <stdio.h>

int sub (int x, int y){
	 return x - y;
}

int main() 
{
	int x;
	int y;
	printf( "Please input two numbers to be subtracted: " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	printf( "The product of your two numbers is %d\n", sub( x, y ) );
		 return 0;
}

