//member pointer

#include<stdio.h>
#include<conio.h>
struct cycle{
    char company[30];
    int quantity;
    float price;

} ;
void main(){
   struct cycle s;

   char *p=s.company;
   printf("enter company\n");
   scanf("%s",s.company);
   printf("enter quant\n");
   scanf("%d",&s.quantity);
   printf("enter price\n ");
   scanf("%f",&s.price);


   printf("company=%s\n",s.company);
   printf("quant=%d\n",s.quantity);
   printf("price=%f\n",s.price);
}
