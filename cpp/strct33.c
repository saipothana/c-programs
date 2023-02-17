//C Program to Store Information of Students Using Structure

#include<stdio.h>
struct student{
    char name[30];
    int marks;
};
void print(struct student a[10]){
    int i;
    for(i=0;i<10;i++){
        printf("roll No: %d\n",i+1);
        printf("name=%s\n",a[i].name);
printf("marks=%d\n",a[i].marks);
    }
}

void main(){

    struct student p[10];
int i;
for(i=0;i<10;i++){
    printf("enter name\n");
    scanf("%s",&p[i].name);

    printf("enter marks\n");
    scanf("%d",&p[i].marks);
}

print(p);


}