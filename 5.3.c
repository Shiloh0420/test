#include<stdio.h>

int main(){
    printf("plz input day numbers\n");
    int days;
    scanf("%d", &days);
    for(;days>0;){
        int weeks = days / 7;
        int rem_days = days % 7;
        printf("%d days are %d weeks, %d days\n", days, weeks, rem_days);
        printf("again\n");
        scanf("%d", &days);
    }
    return 0;
}