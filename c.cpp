#include <iostream>

int main()
{
	float ki, mi;
	printf( "enter value in kilometers") ;
	scanf_s("%f", &ki);
	mi = ki * 0.62137;
	printf( "your value in miles %f", mi);
	return(0);
}
