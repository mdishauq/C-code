#include<stdio.h>//simple code for array revers
#define N 9
int main(){

    int x,y, a[N] = {34,56,54,32,67,89,90,32,21};
    int mid = N/2;
    for(int i=0;i<mid;i++){
        x= a[i];
        y=a[N-1-i];
        a[N-i-1] =x;
        a[i] =y;
    
    }

    for(int i;i<N;i++){
        printf("%d ",a[i]);
    }
}
