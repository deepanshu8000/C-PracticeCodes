#include<stdio.h>
typedef struct vector
{
    int x;
    int y;
}V;

void claculate(V v1,V v2,V v3);
int main(){
    V v1={1,3};
    V v2={5,8};
    V v3={0};
    claculate(v1,v2,v3);

}
void claculate(V v1,V v2,V v3){
    v3.x=v1.x+v2.x;
    v3.y=v1.y+v2.y;
    printf("VECTOR IS : %d,%d",v3.x,v3.y);
    
}