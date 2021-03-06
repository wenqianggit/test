#include <stdio.h>
#include <math.h>

float AreaOfTriangle( float a, float b, float c )
{
    float p = ( a + b + c ) / 2.0f;
    return sqrt( p * ( p - a ) * ( p - b ) * ( p - c ) );
}

int main(void)
{
    printf( "Hello git!\n" );
    printf( "The area of a triangle is: %f\n",
            AreaOfTriangle( 6.0f, 6.0f, 6.0f ) );
    return 0;
}

