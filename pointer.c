//increment and decrement of pointer
#include<stdio.h>
int main(){
    int a=22;
    int *ptr = &a;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n\n",ptr);
    ptr--;
    printf("%u\n",ptr);

    float b=22.0;
    float *ptrr = &b;
    printf("%u\n",ptrr);
    ptrr++;
    printf("%u\n\n",ptrr);

    
    char c= '*';
    char *ptrchar = &c;
    printf("%u\n",ptrchar);
    ptrchar++;
    printf("%u\n\n",ptrchar);



    int d = 20;
    int *ptr1= &d;
    int e = 18;
    int *ptrr2 = &e;
    printf("%u\n%u\n difference %u\n ",ptr1,ptrr2,ptr1-ptrr2);
    ptrr2= &d;
    printf("comparison %u",ptr1==ptrr2);

}