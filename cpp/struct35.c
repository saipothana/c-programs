//Book Shop Inventory project case study

#include<stdio.h>
#include<string.h>

struct record{
    char author[20];
    char title[30];
    float price;
    struct{
        char month[10];
        int year;
    }date;
    char publisher[10];
    int quantity;
};

int lookup(struct record table[],char s1[],char s2[],int m){
    int i;
   // printf("m=%d\n",m);
    for(i=0;i<m;i++){
       
        if(strcmp(s1,table[i].title)==0&&strcmp(s2,table[i].author)==0){
            return (i);

        }
    }
       
     
            return (-1);
    
    }

    



void main(){
    char title[30],author[20];
    int index,noofrecords;
    char response[10];
    int quantity;

    struct record book[]={
{"Ritchie","CLanguage",45.00,"May",1977,"PHI",10},
{"Grossling","java",75.50,"July",1991,"HaYden",5},
{"Balaguruswamy","BASIC",30.00,"January",1984,"TMH",0},
{"AnandKumar","ControlSystems",60.00,"December",1988,"Macmillan",25}
    };

noofrecords=sizeof(book)/sizeof(struct record);
//printf("%d\t%d\t%d",sizeof(book),sizeof(struct record),noofrecords);  //352  88  = 4

do{
    printf("Enter title and author name as per the list\n");
    printf("Title:  \n");
    scanf("%s",&title);
    printf("Author  \n");
    scanf("%s",&author);
   index=lookup(book,title,author,noofrecords);
   if(index!=-1){  /*Book found*/

printf("%s %s %.2f %s %d %s\n",book[index].author,book[index].title,book[index].price,book[index].date.month,book[index].date.year,book[index].publisher);

printf("enter no of copies: ");
scanf("%d",&quantity);
if(quantity < book[index].quantity){
    printf("cost of %d copies is = %f\n",quantity,(((float)quantity) * book[index].price));
}
else{
    printf("Required copies not in stock\n");
}
   }
   else{
    printf("Book not in listing\n");

   }
   printf("Do you want another copy? (YES / NO))\n");
   fflush(stdin);
   scanf("%c",response);
   
}
while(response[0]=='y'||response[0]=='Y');
printf("thank YOU! Have a Good day\n");

}