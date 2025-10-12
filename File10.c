#include<stdio.h>
int main(){
    typedef struct File10
    {
        char name[200];
        int marks;
        float cgpa;
        

    }stu;
    stu s1[3];
    for(int i=0;i<3;i++){

    printf("\n Enter details for Student %d \n", i + 1);

    
    printf("ENTER NAME :");
    fgets(s1[i].name,200,stdin);

    printf("ENTER MARKS :");
    scanf("%d",&s1[i].marks);

    printf("ENTER CGPA :");
    scanf("%f",&s1[i].cgpa);
    getchar();
    }

    FILE *ptr;
    ptr=fopen("File10.txt","w");
    fprintf(ptr,"%-5s %-20s %-10s %-10s\n","S.NO","NAME","MARKS","CGPA");

    for(int i=0;i<3;i++){
    fprintf(ptr,"%-5d %-20s %-10d %-10.2f\n",i+1,s1[i].name,s1[i].marks,s1[i].cgpa);

    }
    printf("\nData successfully written to File10.txt in table format!\n");
    fclose(ptr);
    

}