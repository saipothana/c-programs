// area of rect using func

#include<stdio.h>
#include<conio.h>
float rect(int len,int bre);
float rect(int len,int bre){
    return len*bre;
}
void main(){
    int len,bre;
    printf("enter len and ber\n");
    scanf("%d %d",&len,&bre);
printf("the area of rect is %d * %d=%f\n",len,bre,rect(len,bre));
}