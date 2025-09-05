#include<stdio.h>
void printArr(int a[],int n){
    int i,a;
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
}
void bubble(int a[],int n){
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++){
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
 void main()
    {
        int i,j,temp;
        int a[5]={1,3,5,2,4};
        int n =sizeof(a)/sizeof(a[0]);
        printf("array before sorting-\n");
        printArr(a,n);
        bubble(a,n);
        printf("array after sorting-\n");
        printArr(a,n);
         }
    
}