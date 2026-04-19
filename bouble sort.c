int main(){
    int i,j,n;
    printf("Give the Array limit ");
    scanf("%d",&n);
    int  arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){ //for disending <//
            swap(&arr[j],&arr[j+1]);
        }
       }
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

