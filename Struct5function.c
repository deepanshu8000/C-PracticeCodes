#include<stdio.h>



struct library
{
    char bookname[200];
    int pages;
    float weight;
};
void myfunction(struct library s1);

int main(){
struct library s1={"c programming",200,1.6};
myfunction(s1);

}


void myfunction(struct library s1){
    printf("BOOKNAME : %s\tPAGES : %d\tWEIGHT : %f kg\t",s1.bookname,s1.pages,s1.weight);
}
