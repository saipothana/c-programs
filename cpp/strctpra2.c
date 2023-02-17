//practice structures by building projects

/*
1) Employee management system 

employee management system: Create a program that can store and manage information about employees in an organization. Use a structure to store information such as employee name, ID, salary, and position. You can then use this structure to add new employees, search for existing employees, and update employee information.

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
    char name[30];
    int id;
    float salary;
    char band;
};

void add_element(struct employee add[],int size){
    printf("enter employee name\n");
    scanf("%s",&add[size].name);
    printf("enter id\n");
    scanf("%d",&add[size].id);
    printf("enter salary\n");
    scanf("%f",&add[size].salary);
    printf("enter band\n");
    fflush(stdin);
    add[size].band=getchar();

}

void delete_element(struct employee del[],int size){
    int id,i,j;
    printf("enter id\n");
    scanf("%d",&id);

    for(i=0;i<size;i++){
       if(id==del[i].id){
for(j=i;j<size;j++){
    del[j]=del[j+1];
}
size--;
       }

       printf("Employee is resigned!\n");
return;
    }

    printf("employee details not found\n");

}
void search_element(struct employee sea[],int size){
    char name[30];
    int i,j;
    printf("enter name\n");
    scanf("%s",&name);
    for(i=0;i<size;i++){
        if((strcmp(name,sea[i].name) == 0)){
            printf("Employee found!\n");
            printf("Name: %s\n", sea[i].name);
            printf("ID: %d\n", sea[i].id);
            printf("Salary: %.2f\n", sea[i].salary);
            printf("grade: %c\n", sea[i].band);
            return;
        }
    }
    printf("employee not joined\n");
}


void update_element(struct employee upd[],int size){
    int id,i;

    printf("enter id\n");
    scanf("%d",&id);

    for(i=0;i<size;i++){
        if(id==upd[i].id){
       printf("Enter new employee name: ");
            scanf("%s", upd[i].name);
            printf("Enter new employee salary: ");
            scanf("%f", &upd[i].salary);
            printf("Enter new employee position: ");
            fflush(stdin);
            scanf("%c", upd[i].band);
            printf("Employee information updated!\n");
            return;
        }
    }
    printf("Employee not found!\n");
}

void main(){
    struct employee e[30];
    int size=0;
    int choice;
    char ch;
    do{
        printf("\t\t=================================\t\t\n");
        printf("\t\t===enter 1 for add_employee======\t\t\n");
         printf("\t\t===enter 2 for del_employee======\t\t\n");
          printf("\t\t===enter 3 for search_employee======\t\t\n");
           printf("\t\t===enter 4 for update_employee======\t\t\n");
            printf("\t\t===enter 5 for exit======\t\t\n");
           

printf("enter choice\n");
scanf("%d",&choice);

           switch(choice){
            case 1:add_element(e,size);
            size++;
            break;
case 2:delete_element(e,size);
            size++;
            break;
            case 3:search_element(e,size);
            size++;
            break;
            case 4:update_element(e,size);
            size++;
            break;

            case 5:printf("exit\n");
            exit(0);
            break;

            defaut:printf("please enter correct choice\n");

           }
printf("enter ch\n");
fflush(stdin);
scanf("%c",&ch);

    }
    while(ch=='y'||ch=='Y');

    printf("thank you for joining our company.......\n");
}

