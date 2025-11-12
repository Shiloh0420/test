#include<stdio.h>
#include<stdlib.h>

int bstoi(char *st);
int main(){
    char input[100];
    printf("Enter a binary string:\n");
    scanf("%s", input);
    int result = bstoi(input);
    printf("The integer value is: %d\n", result);
    return 0;
}

int bstoi(char *st){
    int result = 0;
    while(*st){
        result = result * 2 + (*st - '0');
        st++;
    }
    return result;
}