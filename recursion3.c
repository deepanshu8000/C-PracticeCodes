//program to convert celcius into far.
#include<stdio.h>
float temp(float celcius){
    int far = celcius*(9.0/5.0)+32;
    return far;
    }
    int main(){
        printf("temp in far is : %f\n",temp(37));
        return 0;
    }