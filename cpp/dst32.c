// restaurant project using string

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch[30][30],c;
   long int price[100],total=0;
   int i=0,j,order;

   do{
printf("====================welcome to the hotel kaboom===================================\n");
printf("====================have a look on the menu!======================================\n");
printf("\t\t\t\t=======  press 1 for vegmeals========================\n");
printf("\t\t\t\t=======  press 2 for non veg meals ========================\n");
printf("\t\t\t\t=======  press 3 for tandoori========================\n");
printf("\t\t\t\t=======  press 4 for lolipop========================\n");
printf("\t\t\t\t=======  press 5 for mixedmeals========================\n");
printf("enter your option from:\n 1\n 2\n 3\n 4\n 5\n");
scanf("%d",&order);
printf("============================j===================================\n");

switch(order){
    case 1:price[i]=100; strcpy(ch[i],"VEG-MEALS"); total=total+price[i];
   i++;
    break;

     case 2:price[i]=200; strcpy(ch[i],"NON-VEG-MEALS"); total=total+price[i];
     i++;
break;
      case 3:price[i]=120; strcpy(ch[i],"tandoori"); total=total+price[i];
    i++;
      break;
       case 4:price[i]=180; strcpy(ch[i],"lolipop"); total=total+price[i];
      i++;
       break;
        case 5:price[i]=160; strcpy(ch[i],"mixed-MEALS"); total=total+price[i];
       i++;
break;
        //default: printf("=====order the food displayed in the menu only\n=====");
}
printf("do you want to continue\n");
c=getche();
printf("\n");

}
while(c=='y'||c=='Y');

printf("===============j=============\n");

for(j=0;j<i;j++){
    printf("%d name=%s price=%ld\n",j,ch[j],price[j]);
}

printf("========total =%ld======\n",total);
   }

