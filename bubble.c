//Bubble sort
#include<stdio.h>
void printArr(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
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
}

int main()
{
    int a[5]={1,3,5,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    printf("array before sorting-\n");
    printArr(a, n);
    bubble(a, n);
    printf("array after sorting-\n");
    printArr(a, n);
    return 0;
}   
