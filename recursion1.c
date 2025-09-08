//basic program to use recursive function
#include<stdio.h>
void cr(int count){
    if (count == 0)
    {
        return;
    }
    
    printf("hello Deepanshu\n");
    cr(count-1);

}
int main(){
    cr(5);
    return 0;
}