#include<stdio.h>

int max_array(int arr[], int n);

int main()
{
    int a[5]={114, 514, 1919, 810, 1919810};
    max_array(a, 5);
    printf("The maximum value in the array is: %d\n", max_array(a, 5));
    printf("Ai真是智能呢!(恼)\n");
    return 0;
}

int max_array(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}