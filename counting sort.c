
#include<stdio.h>

 int main(){
    int i,j,n;
    printf("Give the Array limit");
    scanf("%d",&n);
    int  arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=-1;
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
   int count[max+1];
   for(i=0;i<=max;i++){
        count[i] = 0;
    }

   for(i=0;i<n;i++){
    count[arr[i]]++;
   }
   for(i=i;i<=max;i++){
    count[i] += count[i-1];
   }
   int output[n];
   for(i=n-1;i>=0;i--){
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
   }
   for (i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}
