#include<stdio.h>

int main(){
    int  ch;
    int n_odd_number=0;
    int n_even_number=0;
    int sum_odd=0;
    int sum_even=0;
    while((scanf("%d",&ch))==1&&ch!=0){
        if(ch%2==0){
            n_even_number++;
            sum_even+=ch;
        }
        if(ch%2==1){
            n_odd_number++;
            sum_odd+=ch;
        }
    }
    printf("The number of even number is %d\n"
        "The average value of even numbers is %.1f\n",
        n_even_number,(double)sum_even/n_even_number
    );
    printf("The number of odd number is %d\n"
        "The average value of odd numbers is %.1f\n",
        n_odd_number,(double)sum_odd/n_odd_number
    );
    return 0;
}