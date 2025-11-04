#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    int n_spaces = 0;
    int n_lines = 0;
    int n_other = 0;
    while((ch = getchar())!= '#'){
        if(ch == ' '){
            n_spaces++;
        } else if(ch == '\n'){
            n_lines++;
        } else {
            n_other++;       
        }
    }
    printf("Number of spaces: %d\n", n_spaces);
    printf("Number of lines: %d\n", n_lines+1);
    printf("Number of other characters: %d\n", n_other);
    return 0;
}