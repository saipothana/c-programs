//returning struct var 

#include<stdio.h>
typedef struct complex
{
    /* data */
    float n1;
    float n2;
}complex;

complex add(complex p,complex q){
complex c;
c.n1=p.n1+q.n1;
c.n2=p.n2+q.n2;
return c;
}

void main(){
    complex a,b;

    printf("enter a\n");
    scanf("%f %f",&a.n1,&a.n2);
    printf("enter b\n");
    scanf("%f %f",&b.n1,&b.n2);

  complex res= add(a,b);
  printf("%.2f %.2f",res.n1,res.n2);



    
}
