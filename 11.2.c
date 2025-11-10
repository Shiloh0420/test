#include<stdio.h>
char * s_gets(char * st, int n);
int main(){
    char str[20];
    printf("Enter a string:\n");
    s_gets(str, 20);
    printf("You entered: %s\n", str);
    return 0;
}
char * s_gets(char * st, int n){
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if(ret_val){
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n'){
                continue;
            }
    return ret_val;                
    }
}