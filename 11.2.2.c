#include<stdio.h>
#define SIZE 40

void string_scan(char str[], int n);
int main()
{
    char input[SIZE];
    puts("Please enter a string:");
    string_scan(input, SIZE);
    printf("You entered\n");
    puts(input);
    return 0;
}

void string_scan(char str[], int n)
{
    int i=0;
    do{
        str[i]=getchar();
        if(str[i]=='\n'||str[i]==' '||str[i]=='\t'){
            break;
        }
     } while (str[i]!=EOF&&++i<n);
}