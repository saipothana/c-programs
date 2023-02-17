//passing references

#include<stdio.h>

struct student{
    char name[30];
    int no;
    char school[30];
    
};
void input(char *name,int *no,char *school){
    printf("enter name\n");
    fflush(stdin);
    scanf("%s",name);
printf("enter roll\n");
scanf("%d",no);
printf("enter school\n");
fflush(stdin);
scanf("%s",school);
}
//not printting in the main 
void print(char *name,int *no,char *school){
    printf("name=%s\n",name);
  
    printf("roll=%d\n",*(no));
    printf("school=%s\n",school);
}




void main(){
struct student s;
input(s.name,&s.no,s.school);
print(s.name,&s.no,s.school);

//printting in the main

/*
 printf("name=%s\n",s.name);
  
    printf("roll=%d\n",(s.no));
    printf("school=%s\n",s.school);
}

*/
}
