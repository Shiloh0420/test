#include<stdio.h>
char* get_word(char * str);

int main(){
    char str[100];
    printf("Enter a string:\n");
    get_word(str);
    printf("The First word you entered is: %s\n", str);
    return 0;
}

char* get_word(char * str){
    char ch[100];
    char *in=ch;
    fgets(ch,100,stdin);
    while((*in != ' ' || *in != '\n' || *in != '\t') && *in != '\0'){
        in++;
    }
    while(*in != ' ' && *in!='\n' && *in!='\t' && *in!='\0'){
        *(str++) = *(in++);
    }
    return str;
}