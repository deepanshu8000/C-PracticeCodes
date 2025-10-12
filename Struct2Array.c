#include<stdio.h>
#include<string.h>
int main(){
    struct pop
    {
        char name[200];
        int  class;
        float points;
    };
    struct pop p1[100];
    strcpy(p1[0].name,"Deepanshu Only");
    p1[0].class=12;
    p1[0].points=1.1;
    printf("NAME %s\n",p1[0].name);
    printf("CLASS %d\n",p1[0].class);
    printf("POINTS %f\n\n",p1[0].points);


 strcpy(p1[1].name,"RAJAT");
    p1[1].class=10;
    p1[1].points=0.9;
    printf("NAME %s\n",p1[1].name);
    printf("CLASS %d\n",p1[1].class);
    printf("POINTS %f\n\n",p1[1].points);
    
    

 
}