#include <stdio.h>
/*
    Area account of the circle
*/
#define     PI  3.14159
double AreaOfCircle(double radius){
    return PI * radius * radius;
}

int main()
{
    double radius;
    printf("Please enter a number for the radius:\n");
    scanf("%lf", &radius);
    printf("Radius of Circle= %lf, Area of Circle= %lf", radius, AreaOfCircle(radius));

    return 0;
}
