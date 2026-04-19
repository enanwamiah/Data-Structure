#include<stdio.h>

 int main(){
    int i,j,n;
    printf("Give the Array limit");
    scanf("%d",&n);
    int  arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        int mindex=i;
        for (j=i+1;j<n;j++){
          if(arr[j]<arr[mindex]){ ////for disending < //
            mindex=j;
          }
        }
        swap(&arr[i],&arr[mindex]);
    }
    for (i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

return 0;
 }

 int swap (int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
 }
