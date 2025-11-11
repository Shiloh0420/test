#include<stdio.h>
#include"pe12-2a.h"
int main(int argc,char *argv[]){
    int n;
    printf("Enter 0 for metric mode,1 for US mode:\n");
    scanf("%d",&n);
    while(n>=0){
        set_mode(n);
        get-info();
        show-info();
        printf("Enter 0 for metric mode,1 for US mode(-1 to quit):\n");
        scanf("%d",&n);
    }
    printf("Done.\n");
    return 0;
}

void set_mode(int m){
    if(m==0||m==1){
        mode=m;
    }else{
        printf("Invalid mode specified.Mode 1(US) used.\n");
        mode=1;
    }
}

void get-info(void){
    if(mode==0){
        printf("Enter distance traveled in kilometers:");
        scanf("%lf",&range);
        printf("Enter fuel consumed in liters:");
        scanf("%lf",&fuel);
    }else{
        printf("Enter distance traveled in miles:");
        scanf("%lf",&range);
        printf("Enter fuel consumed in gallons:");
        scanf("%lf",&fuel);
    }
}

void show-info(void){
    if(mode==0){
        printf("Fuel consumption is %.2lf liters per 100 km.\n",fuel/range*100);
    }else{
        printf("Fuel consumption is %.1lf miles per gallon.\n",range/fuel);
    }
}