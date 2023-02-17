//passing strct members as an argument

#include<stdio.h>
#include<conio.h>
struct library
{
    /* data */
    int bookno;
    int pages;
    char name[30];
    char author[30];
    float cost;

};
/*
void input(int bookno,int pages,char name[30],char author[30],float cost){
printf("enter bookno\n");
scanf("%d",&bookno);
printf("enter pages\n");
scanf("%d",&pages);
printf("enter name\n");
scanf("%s",&name);
printf("enter author\n");
scanf("%s",&author);
printf("enter cost\n");
scanf("%f",&cost);
}
*/

void print(int bookno,int pages,char name[30],char author[30],float cost){
    printf("bookno=%d\n",bookno);
    printf("pages=%d\n",pages);
    printf("name=%s\n",name);
    printf("author=%s\n",author);
    printf("cost=%.2f\n",cost);

}

void main(){
struct library info;
input(info.bookno,info.pages,info.name,info.author,info.cost);

printf("enter bookno\n");
scanf("%d",&info.bookno);
printf("enter pages\n");
scanf("%d",&info.pages);
printf("enter name\n");
scanf("%s",&info.name);
printf("enter author\n");
scanf("%s",&info.author);
printf("enter cost\n");
scanf("%f",&info.cost);



print(info.bookno,info.pages,info.name,info.author,info.cost);
}