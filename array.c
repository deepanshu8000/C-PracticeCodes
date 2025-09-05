#include <stdio.h>
void arrrev(int *arr ,int n){
    int  start=0,  end=n-1,temp;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}
    int main(){
        int n;
        printf("enter no of terms:");
        scanf("%d",&n);
        int arr[n];
        printf("enter  values %d:",n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        arrrev(arr,n);
         printf("reversed array ");
        for(int i=0;i<n;i++){
            printf(" %d\n",arr[i]);
        }
        return 0;
    }



     

