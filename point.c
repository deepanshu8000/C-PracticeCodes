//function to find out maximum of two numbers using pointers
#include<stdio.h>
void findmax(int *max , int *min ,int *a,int*b){
    
if(*a>*b){
    *max=*a;
    *min=*b;
}
else if(*a==*b){
    printf("EQUAL\n");
    *max=*a;
    *min=*b;
}

else{
    *max=*b;
    *min=*a;
}
}
int main(){
    int a,b,min ,max;
    printf("enter A and B :");
    scanf("%d%d",&a,&b);
    
    
    findmax(&max,&min,&a,&b);
    if(a!=b){
    printf(" MAX IS %d",max);
     printf(" Min  IS %d",min);
    }
    


    

}