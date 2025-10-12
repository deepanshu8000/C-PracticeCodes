#include<stdio.h>
int main(){
    struct room
    {
     int roomno;
     char roomtype[200];
     float rent;
    };

    struct room s1={121,"BEDROOM",790.0};
    struct  room *ptr;
    ptr = &s1;
    printf("INFORMATION :%d\t",ptr->roomno);
     printf("INFORMATION :%s\t",ptr->roomtype);
      printf("INFORMATION :%f\t",ptr->rent);

    
    
    
}