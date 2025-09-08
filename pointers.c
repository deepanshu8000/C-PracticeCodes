//pointers implementation
#include<stdio.h>
void doWork(int x,int y,int *sum,int *pro,int *average );
int main(){
    int x,y;
    printf("Enter x & y :\n" );
    scanf("%d%d", &x, &y);
    int sum,pro,average;
    doWork(x,y,&sum,&pro,&average);
    printf("sum = %d pro= %d and avg=%d \n",sum,pro,average);
    return 0;
}
void doWork(int x,int y,int *sum,int *pro,int *average ){
    *sum=x+y;
    *pro=x*y;
    *average=(x+y)/2;




}