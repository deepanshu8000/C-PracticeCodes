#include<stdio.h>
float square(float side){
return side*side;
}
float circle(float radius){
    return 3.14*radius*radius;
}
float rectangle(float a, float b){
    return a*b;
}
int main(){
    float a = 15;
    float b =10;
    printf("area of rectangle is :%f",rectangle(a,b));
    return 0;
    
    
}
