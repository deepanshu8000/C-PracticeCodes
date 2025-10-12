#include<stdio.h>

struct Struct9complex
{
    int real;
    int img;
};
void complex( struct Struct9complex n1, struct Struct9complex n2);


int main(){
    struct Struct9complex n1;
    struct Struct9complex n2;
    n1.real=12;
    n1.img=1;
    n2.real=6;
    n2.img=2;
    complex(n1,n2);
}


void complex( struct Struct9complex n1, struct Struct9complex n2){
   printf("NUM 1:%d %d\n",n1.real,n1.img);
   printf("NUM 1:%d %d\n",n2.real,n2.img);
}
