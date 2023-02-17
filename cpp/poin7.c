//swap two numbers using pointers

#include<stdio.h>

#include<conio.h>
void main(){
    int a,b;
    printf("enter a\n");
    scanf("%d",&a);

      printf("enter b\n");
    scanf("%d",&b);
    int *p1=&a;
    int *p2=&b;
    printf("Before swap\n");
     printf("%d\n",a);
     printf("%d\n",b);
     /*  with temporary var=================================================
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

    ============================================================*/

  *p1=*p1 + *p2;
  *p2=*p1 - *p2;
  *p1=*p1-*p2;

printf("after swap\n");
    printf("%d\n",a);
     printf("%d\n",b);
}