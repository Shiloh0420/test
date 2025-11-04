#include<stdio.h>

int main(){
    char ch;
    int i=0;
    while ((ch = getchar()) != '#') {
        printf("%3d", ch);
        if(i<8){
        printf(" ");
        i++;
        }
        if(i==8){
        printf("\n");
        i=0;
        }
        }
    return 0;
}