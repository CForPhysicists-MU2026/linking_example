#include <stdio.h>
#include <math.h>


double MySqrt( double a )
{
    return sqrt( a );
}


int main()
{
    double a = 3.5;
    double b = MySqrt( a );

    printf( "The result is: %f\n", b );

    return 0;
}
