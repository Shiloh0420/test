#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++){
        int letter = 'E';
        for(j=0;j<=i;j++){
            printf("%c",letter);
            letter--;
        }
        printf("\n");
    }
}