#include <stdio.h>


double MySqrt( double a );


int main()
{
    double a = 3.5;
    double b = MySqrt( a );

    printf( "The result is: %f\n", b );

    return 0;
}
