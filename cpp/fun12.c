//perform calci using fun

#include<stdio.h>
#include<conio.h>
float add(float a,float b);
float sub(float a,float b);
float mol(float a,float b);
float div(float a,float b);
//float mod(float a,float b);

float add(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a,float b){
    return a/b;
}


 
void main(){


 printf("-----simple cal---\n");
    printf("1 for add\n 2 for sub\n 3 for div\n 4 for mul\n 5 for mod\n");
    float a,b;
    printf("enter two nums\n");
    scanf("%f %f",&a,&b);

    int ch;
    printf("enter ch\n");
    scanf("%d",&ch);

    
switch(ch){
        case 1:printf("%f + %f=%f\n",a,b,add(a,b));
        break;
         case 2:printf("%f - %f=%f\n",a,b,sub(a,b));
        break;
         case 3:printf("%f * %f=%f\n",a,b,mul(a,b));
        break;
         case 4:printf("%f / %f=%f\n",a,b,div(a,b));
        break;
        // case 5:printf("%f -%f=%f\n",a,b,mod(a,b));
        //break;
        

        
default:printf("select only 1 to 5");
        
    }
}