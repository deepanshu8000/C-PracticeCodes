#include<stdio.h>
void array(int arr[],int n);
int main(){
    int n;
    printf("Enter no of terms :");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   array(arr,n);
}
void array(int arr[],int n){
    int count=1;
    for (int i = 0; i < n; i++)
    {
        printf("MARKS OF STUDENT %d is %d\n",count,arr[i]);
        count++;
    }
    
}