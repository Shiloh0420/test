#include<stdio.h>

void copy_arr(double target[],double sourse[],int n);
void copy_ptr(double *target,double *sourse,int n);
void copy_ptrs(double *target,double *sourse,double *end);

int main(){
    double source[5]={1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    for(int i=0;i<5;i++){
        printf("%.1lf %.1lf %.1lf\n",target1[i],target2[i],target3[i]);
    }   
    return 0;
}

void copy_arr(double target[],double sourse[],int n){
    for (int i=0;i<n;i++){
        target[i]=sourse[i];
    }
}

void copy_ptr(double *target,double *sourse,int n){
    for (int i=0;i<n;i++){
        *(target+i)=*(sourse+i);
    }
}

void copy_ptrs(double *target,double *sourse,double *end){
    int i=0;
    for(double *p=sourse;p<end;p++){
        *(target+i)=*p;
        i++;
    }
}