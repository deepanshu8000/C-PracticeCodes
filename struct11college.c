#include<stdio.h>
typedef struct college
{
   char clgname[100];
}clg;



typedef struct admin
{
   char aname[100];
}ad;

typedef struct courses
{
   char cname[100];
}cr;



int main(){

    clg c;
    printf("Enter colllege name");
    fgets(c.clgname,100,stdin);


    ad a1;
    printf("Enter admin name");
    fgets(a1.aname,100,stdin);


    cr c1;
    printf("Enter course name");
    fgets(c1.cname,100,stdin);




    printf("---COLLEGE---");
    puts(c.clgname);


    printf("---ADMIN---");
    puts(a1.aname);


    printf("---COURSE---");
    puts(c1.cname);




    

}
