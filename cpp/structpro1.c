/* Student database: You can create a structure to store information about students, such as their name, ID number, and grades.

 Then, you can write functions to add new students, delete students, and search for a particular student by ID number.

 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50

struct student{
    char name[50];
    int id;
    float marks[3];
};

struct student stu[max];
int nos=0;

void add(char *name,int id,float *marks){

if(nos>max){
    printf("student is not there in dATa base\n");
}
strcpy(stu[nos].name,name);
stu[nos].id=id;
for(int j=0;j<3;j++){
stu[nos].marks[j]=marks[j];
}

nos++;
}

void del(int id){
    int i,j;
    for(i=0;i<nos;i++){
        if(stu[i].id==id){
            for(j=i;j<nos-1;j++){
                stu[j]=stu[j+1];
            }
            nos--;
        }
    }

    printf("Error: Student with ID %d not found.\n", id);
}




struct student *find(int id){
    int i;
    for(i=0;i<nos;i++){
    if(stu[i].id==id){
        return &stu[i];
    }
    }

    return NULL;
}


void print_student(struct student *p){
    printf("Name: %s\n", p->name);
    printf("ID: %d\n", p->id);
    printf("Marks: %.2f %.2f %.2f\n", p->marks[0], p->marks[1], p->marks[2]);
}

void main(){
     add("Alice", 1, (float[]){90, 95, 85});
    add("Bob", 2, (float[]){80, 85, 90});
    add("Charlie", 3, (float[]){70, 75, 80});
    add("Dave", 4, (float[]){60, 65, 70});
    add("Eve", 5, (float[]){50, 55, 60});

    del(4);
    struct student *p=find(5);


    if(p!=NULL){
         print_student(p);
    }

    else{
                printf("Error: Student with ID 4 not found.\n");

    }
}



