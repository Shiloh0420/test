#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp=fopen("data.txt","w");
    char ch;
    if(fp==NULL){
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter your name plz:\n");
    while((ch=getchar())!='\n'){
        fputc(ch,fp);
    }
    fclose(fp);
    printf("OK,your name is:\n");
    FILE *fp1;
    fp1=fopen("data.txt","r");
    if(fp1==NULL){ 
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);
    }
    while((ch=fgetc(fp1))!=EOF){
        putchar(ch);
    }
    fclose(fp1);
    return 0;
}