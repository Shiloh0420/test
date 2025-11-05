#include<stdio.h>
#include<stdlib.h>

int main(){
    int ch;
    FILE *fp;
    char fname[50];
    int num=0;
    printf("Enter the name of file plz.\n");
    scanf("%s",fname);
    fp = fopen(fname,"r");
    if(fp == NULL){
        printf("No,failed to open the file QwQ\n");
        exit(-1);
    }
    while ((ch=getc(fp))!=EOF){
        putchar(ch);
        num++;
    }
    printf("\nThe number of characters in the file is %d\n",num);
    }