#include<stdio.h>

int main(){
    int n=0,a[4]={1,4,3,2};
    int *pmin = &a[0],*pmax = pmin;
    for(n;n<sizeof(a)/sizeof(a[0]);n++){

      if(n==0)continue;
      if (*pmin>a[n]){
          pmin = &a[n];
      }
      if(*pmax<a[n]){
          pmax =&a[n];
      }
    }
    printf("%d %d",*pmin,*pmax);

}
