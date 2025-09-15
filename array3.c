//Storing elements in aaray
#include<stdio.h>
int main(){
    float arr[3];
    printf("Price of item1 :\n");
    scanf("%f",&arr[0]);
    printf("Price of item2 :\n");
    scanf("%f",&arr[1]);
    printf("Price of item3 :\n");
    scanf("%f",&arr[2]);
    printf("%f\n%f\n%f\n",arr[0]+(.18*arr[0]),arr[1]+(.18*arr[1]),arr[2]+(.18*arr[2]));

}



