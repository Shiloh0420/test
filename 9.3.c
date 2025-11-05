#include<stdio.h>

double Harmonic_mean(double,double);

int main(){
    double a,b;
    printf("plz enter two numbers (^-^)\n");
    scanf("%lf %lf",&a,&b);
    double harmonic=Harmonic_mean(a,b);
    printf("The harmonic of the two words is %lf\n",harmonic);
    return 0;
}

double Harmonic_mean(double a,double b) {
    double reciprocal_a =1/a;
    double reciprocal_b =1/b;
    double rharmonic_mean=reciprocal_a+reciprocal_b;
    double harmonic=1/rharmonic_mean;
    return harmonic;
}