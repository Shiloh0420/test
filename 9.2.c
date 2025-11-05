#include<stdio.h>

void chline(char,int,int);

int main(){
    char ch;
    int i;
    int j;
    printf("plz enter the character.\n"
    "plz enter the line.\n"
    "plz enter the column.\n");
    scanf("%c %d %d",&ch,&i,&j);
    chline(ch,i,j);
    return 0;
}

void chline(char ch,int i,int j){
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            putchar(ch);
        }
        printf("\n");
    }
}
