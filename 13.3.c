#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
    printf("plz enter the file name:\n");
    char filename[50];
    char ch;
    scanf("%s",filename);
    FILE *fp;
    if((fp=fopen(filename,"r+"))==NULL){
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);
    }
    while((ch=getc(fp))!=EOF){
        fseek(fp,-sizeof(char),SEEK_CUR);
        putc(toupper(ch),fp);
    }
    fseek(fp,0,SEEK_SET);
    while((ch=getc(fp))!=EOF){
        putchar(ch);
    }
    fseek(fp,0,SEEK_SET);
    puts("\n");
    while((ch=getc(fp))!=EOF){
        fseek(fp,-sizeof(char),SEEK_CUR);
        putc(tolower(ch),fp);
    }
    fclose(fp);
    return 0;
}