//perform math operations using functions
#include<stdio.h>
#include<conio.h>
void cal(int a,int b);
void cal(int a,int b){
    int ch;
     printf("enter chaoice\n");
   scanf("%d",&ch);
    switch(ch){
        case 1:printf("%d + %d=%d\n",a,b,(a+b));
        break;

        case 2:printf("%d -%d=%d\n",a,b,(a-b));
        break;
        case 3:printf("%d / %d=%d\n",a,b,(a/b));
        break;
        case 4:printf("%d * %d=%d\n",a,b,(a*b));
        break;
        case 5:printf("%d %% %d=%d\n",a,b,(a%b));
        break;
default:printf("select only 1 to 5");
        
    }
}
void main(){

    printf("-----simple cal---\n");
    printf("1 for add\n 2 for sub\n 3 for div\n 4 for mul\n 5 for mod\n");
    int a,b;
    printf("enter two nums\n");
    scanf("%d %d",&a,&b);
    
cal(a,b);


   

}