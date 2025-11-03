#include<stdio.h>
int main(){
    printf("plz input a number\n");
    int n;
    scanf("%d", &n);
    int i;
    for(i=1;i<=10;i++){
    printf("%d ",n);
    n++;
    }
    return 0;
}