#include<stdio.h>

int main(){
    int i,j;
    int letter = 'A';
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("%c",letter);
            letter++;
        }
        printf("\n");
    }        
}