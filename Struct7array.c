#include<stdio.h>
#include<string.h>
typedef struct AddressInfo
{
    int  house;
    int block;
    char city[200];
    char state[200];
}AI;

void printAdd(AI a1[5]);
 int main(){
    AI a1[5];
    a1[0].house=1;
    a1[0].block=1;
    strcpy(a1[0].city,"KOTA");
    strcpy(a1[0].state,"RAJ");


    a1[1].house=2;
    a1[1].block=2;
    strcpy(a1[1].city,"INDORE");
    strcpy(a1[1].state,"MP");

    a1[2].house=3;
    a1[2].block=3;
    strcpy(a1[2].city,"BARAN");
    strcpy(a1[2].state,"RAJ");

    a1[3].house=4;
    a1[3].block=4;
    strcpy(a1[3 ].city,"JHALAWAR");
    strcpy(a1[3].state,"RAJ");

    a1[4].house=5;
    a1[4].block=5;
    strcpy(a1[4].city,"BUNDI");
    strcpy(a1[4].state,"RAJ");



    printAdd(a1);


    
 }
 void printAdd(AI a1[5]){
    printf("HOUSE %d\n",a1[0].house);
    printf("BLOCK %d\n",a1[0].block);
    printf("CITY %s\n",a1[0].city);
    printf("STATE %s\n\n",a1[0].state);

    printf("HOUSE %d\n",a1[1].house);
    printf("BLOCK %d\n",a1[1].block);
    printf("CITY %s\n",a1[1].city);
    printf("STATE %s\n\n",a1[1].state);

    printf("HOUSE %d\n",a1[2].house);
    printf("BLOCK %d\n",a1[2].block);
    printf("CITY %s\n",a1[2].city);
    printf("STATE %s\n\n",a1[2].state);


    printf("HOUSE %d\n",a1[3].house);
    printf("BLOCK %d\n",a1[3].block);
    printf("CITY %s\n",a1[3].city);
    printf("STATE %s\n\n",a1[3].state);



    printf("STATE %s\n",a1[3].state);
    printf("HOUSE %d\n",a1[4].house);
    printf("BLOCK %d\n",a1[4].block);
    printf("CITY %s\n",a1[4].city);
    printf("STATE %s\n",a1[4].state);






    

 }
 
 

