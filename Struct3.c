#include<stdio.h>
int main(){
    struct Struct3
    {
        char alpha;
        int  digit;
        float flot;
    };
    struct Struct3 s1={'A',1,1.1};
    struct Struct3 s2={'B',2,2.1};
printf("CHARACTER:%c\nDIGIT:%d\nFLOAT:%f\n\n",s1.alpha, s1.digit,s1.flot);
printf("CHARACTER:%c\nDIGIT:%d\nFLOAT:%f\n\n",s2.alpha, s2.digit,s2.flot);
    
}