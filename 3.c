#include<stdio.h>

int main(){
    double input;
    printf("Enter a floating-point number: ");
    scanf("%lf", &input);
    printf("The input is %.1f or %.1e\n", input,input);
    printf("The input is %.3f or %.3e\n", input,input);
    return 0;
}