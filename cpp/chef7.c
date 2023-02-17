#include<stdio.h>
int main(){
    int a;
    float b;
    scanf("%d %f",&a,&b);
    if(a%5!=0||b<a){
        printf("%.2f",b);
    }
    else{
     float c=b-(float)a-0.50;
        printf("%.2f",c);
    }
    return 0;
}