#include<stdio.h>
#include<string.h>
int main(){
    struct Structure
    {
        char name[200];
        int roll;
        float cgpa;
    };
    struct Structure S1;
    strcpy(S1.name,"DEEPANSHU DHAKAD");
    S1.roll=1114;
    S1.cgpa=7.5;
    printf("NAME : %s\n",S1.name);
    printf("ROLL NO : %d\n",S1.roll);
    printf("CGPA : %f\n",S1.cgpa);


    struct Structure S2;
    strcpy(S2.name,"KULDEEP DHAKAR");
    S2.roll=1115;
    S2.cgpa=6.5;
    printf("NAME : %s\n",S2.name);
    printf("ROLL NO : %d\n",S2.roll);
    printf("CGPA : %f\n",S2.cgpa);


    struct Structure S3;
    strcpy(S3.name,"HITU");
    S3.roll=1116;
    S3.cgpa=5.5;
    printf("NAME : %s\n",S3.name);
    printf("ROLL NO : %d\n",S3.roll);
    printf("CGPA : %f\n",S3.cgpa);
    
    
    
}