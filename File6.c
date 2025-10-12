#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("File6.txt","w");

    char name[21];
    printf("ENTER NAME :");
    scanf("%s",name);

    int age;
    printf("ENTER AGE :");
    scanf("%d",&age);

    int cgpa;
    printf("ENTER Cgpa :");
    scanf("%f",&cgpa);


fprintf(ptr,"NAME IS : %s\n",name);
fprintf(ptr,"AGE IS : %d\n",age);
fprintf(ptr,"CGPA IS : %f\n",cgpa);
fclose(ptr);
return 0;
}