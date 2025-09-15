#include<stdio.h>
int OddCount(int *arr,int n);
int main(){
    int n ;
    printf("Number of terms: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf(" NO. of odd terms : %d\n",OddCount(arr,n));

}
int OddCount(int *arr,int n){
    int count =0;
for(int i =0;i<n;i++){
    if(arr[i]%2!=0){
        count++;
    }
}
return count;
}