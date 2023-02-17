#include<stdio.h>
#include<conio.h>
struct inventory{
    char item[30];
    float price;
    int quantity;
};

float newprice(char item[30],float price,int quantity){
    printf("the updated price\n");
    printf("Name=%s\n",item);
    printf("price=%f\n",price);
    printf("quantity=%d\n",quantity);

    return price*quantity;
}
void main(){
struct inventory s;
printf("enter item\n");
scanf("%s",&s.item);
printf("enter price\n");
scanf("%f",&s.price);
printf("enter quantity\n");
scanf("%d",&s.quantity);
printf("===========Before updation pf price=========\n");
 printf("Name=%s\n",s.item);
    printf("price=%f\n",s.price);
    printf("quantity=%d\n",s.quantity);
    printf("After updation\n");
 float p=   newprice("ashirwaad",90,20);
 printf("%f %d\n",s.price,s.quantity);
 printf("the item is %.2f\n",p);


}