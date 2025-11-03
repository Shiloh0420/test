#include<stdio.h>

int main(){
    int i,j,nums;
    char letter;
    scanf("%c",&letter);
    nums=letter-'A'+1;
    for(i=0;i<nums;i++){
        for(j=0;j<=nums-i;j++){
            printf(" ");
        }
        for(j=0,letter='A';j<=i;j++){
            printf("%c",letter);
            letter++;
        }
        for(j=0,letter='A'-1+i;j<=i-1;j++){
            printf("%c",letter);
            letter--;
        }
        printf("\n");
    }
    return 0;
}