//member pointer 

#include<stdio.h>
#include<conio.h>

struct vegetable
{
    /* data */
    int no;
    char name[20];
    float price;
};

void main(){
    struct vegetable v={'1',"aalu",33.23};
    char *ptr=v.name;
    printf("no is kgs=%d\n",v.no);
    printf("name=%s\n",v.name);
    
    printf("price=%1.2f\n",v.price);


}
