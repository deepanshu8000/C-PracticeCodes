//store odd numbers first and then reallocate to store even
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter N :");
     scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("odd no. is %d\n",arr[i]);
        }
    }
    free(ptr);
    realloc(ptr,n );
     for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("even  no. is %d\n",arr[i]);
        }


}
}
