//pointers practise session
//===========================================================================================================================


//================================================================================================================================


//Write a C program to create, initialize and demonstrate the use of pointers. How to access values and addresses using a pointer variable in C programming.

#include<stdio.h>
#include<conio.h>

void main(){
    int a=10;
    float b=30;

    char ch='c';


    printf("the %d is stored in address in %u\n",a,&a);

      printf("the %f is stored in address in %u\n",b,&b);

        printf("the %c is stored in address in %u\n",ch,&ch);

        //here in above program we have seen that the value is stored in address like 'a' allocated with 2bytes of memory 'b' alloctate with 4 bytes of memory

        //now pointer declaration

        int *p1;
        float *p2;
        char *p3;   //the pointer declaration is same as the type the value is storing like we have a the type is integer and we have to initialize pointer with only int not float


        p1=&a;   //   we are storing the address of a in p1 as a value of p1
        p2=&b;
        p3=&ch;

//now how to access the value from pointer for that we use * operato that is defreference operator
printf("\n");

printf("%d is stored at address %u\n and the %d is obtained from pointer having address %u that storing address the a address %u\n",a,&a,*p1,&p1,p1);

printf("\n");

printf("%f is stored at address %u\n and the %f is obtained from pointer having address %u that storing address the b address %u\n",b,&b,*p2,&p2,p2);

printf("\n");

printf("%c is stored at address %u\n and the %c is obtained from pointer having address %u that storing address the ch address %u\n",ch,&ch,*p3,&p3,p3);



}