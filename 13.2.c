#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp,*fp2;
    char buff[1024];
    char ch;

    fp=fopen("高雅人士专用测试语句.txt","r");
    if(fp==NULL){
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);  
    }


    fp2=fopen("copy.txt","w");
    if(fp2==NULL){
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);  
    }

    
    size_t bytes;
    while((bytes=fread(buff,1,sizeof(buff),fp))>0){
        fwrite(buff,1,bytes,fp2);
    }
    fclose(fp);
    fclose(fp2);

    fp2=fopen("copy.txt","r");
    if(fp2==NULL){
        printf("Cannot open file.\n");
        exit(EXIT_FAILURE);  
    }
    while((ch=fgetc(fp2))!=EOF){
        putchar(ch);
    }
    putchar('\n');
    fclose(fp2);
    return 0;
}
