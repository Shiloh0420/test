#include<stdio.h>

double min(double,double);

int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("%lf",min(a,b));
}

double min(double x,double y){
    double min=(x>y?y:x);
    return min;
}
