#include <stdio.h>

int div (int x, int y, int z, int a, int b){
	 return 5 / (x + y + z + a + b);
}

int main() 
{
	int x;
	int y;
	printf( "Please input 5 numbers to be divided : " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	scanf( "%i", &z );
	scanf( "%i", &a );
	scanf( "%i", &b );
	printf( "The product of your two numbers is %d\n", div( x, y ) );
		 return 0;
}

