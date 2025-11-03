#include<stdio.h>
#define minutes_in_hour 60

int main(){
    int minutes;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    for(;minutes>0;){
        int hours = minutes/minutes_in_hour;
        int rem_minutes = minutes % minutes_in_hour;
        printf("%d minutes is %d hour(s) and %d minute(s)\n", minutes, hours, rem_minutes);
        printf("again\n ");
        scanf("%d", &minutes);
    }
    return 0;
}