//perctange science english and math
#include<stdio.h>
int percentage(int math,int science,int english){
    return ((science+math+english)/3);
}
int main(){
    int math ;
    int science;
    int english;
    printf("Enter the marks of math ; science ; english : ");
    scanf("%d%d%d/\n",&math,&science,&english);
    printf("percntage is : %d\n",percentage(math,science,english));
    return 0;
}