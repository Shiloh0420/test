#include<stdio.h>
#define get_harmonic_mean(x,y) (x*y)/(x+y)

int main(){
    double x,y;
    printf("Enter two number: ");
    scanf("%lf %lf", &x, &y);
    printf("the harmonic mean of %lf and %lf is %lf\n", x, y, get_harmonic_mean(x,y));
    return 0;
}