#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    int width = 20;
    printf("\"%*s\"\n", width, name);
    printf("\"%-*s\"\n", width, name);
    width = strlen (name) + 3;
    printf("\"%*s\"\n", width, name);
    printf("\"%-*s\"\n", width, name);
    return 0;
}