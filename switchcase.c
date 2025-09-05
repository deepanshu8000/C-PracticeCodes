#include <stdio.h>
int main(){
    int month;
    int day;
    printf("MENU\n1.january\n2.february\n3.march\n4.april\n5.may\n6.june\n7.july\n8.august\n9.september\n10.october\n11.november\n12.december\n"); 
    printf("enter month number : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:printf("january\n");
    printf("enter day number : "); 
     
    switch (day)
    {
    case 1:printf("monday\n");
        break;
    case 2:printf("tuesday\n");
        break;
    default:printf("invalid day number\n");
        break;
    }
        break;
    case 2:printf("february\n");
        break;
    case 3:printf("march\n");
        break;
    case 4:printf("april\n");
        break;
    case 5:printf("may\n");
        break;
    case 6:printf("june\n");
        break;
    case 7:printf("july\n");
        break;
    case 8:printf("august\n");
        break;
    case 9:printf("september\n");
        break;
    case 10:printf("october\n");
        break;
    case 11:printf("november\n");
        break;
    case 12:printf("december\n");
        break;
    
    default:printf("invalid month number\n");
        break;
    }
}
    