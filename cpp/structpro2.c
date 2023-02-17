/*
1)100devs
2)appacademy
3)Launchcode
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 50  // maximum number of employee records allowed

struct tcs
{
   char ename[30];  // employee name
   int eid;  // employee id
   float esalary;  // employee salary
   char egrade;  // employee grade
   int eleaves;  // number of leaves taken by employee
   int leavesperyear;  // number of leaves allowed per year for this employee
};

struct tcs tcs[max];  // array to store employee records
int nos=0;  // counter for number of records in array

// function to add a new employee record to the database
void add(struct tcs *comp, char *ename, int eid, float esalary, char egrade, int eleaves, int leavesperyear){
  if(nos>max){
        printf("======================================\n");
        printf("entered employee is not in our database");
        printf("=======================================\n");
    }
  
  // copy values into appropriate fields of structure
  strcpy(comp->ename,ename);
  comp->eid=eid;
  comp->egrade=egrade;
  comp->eleaves=eleaves;
  comp->leavesperyear=leavesperyear;
  
  // adjust salary if employee has taken more leaves than allowed
  if(eleaves > leavesperyear){
      comp->esalary=esalary+(500*(eleaves-leavesperyear));
  }
  else{
      comp->esalary=esalary;
  }
  
  nos++;
}

// function to find an employee record by id
struct tcs *find(int eid){
    int i;
    for(i=0;i<max;i++){
        if(tcs[i].eid==eid){
            return &tcs[i];
        }
    }
    return NULL;
}

int main(){
    // add some sample employee records to the database
    add(&tcs[0],"JEEVAN",3,70000,'C',5,10);
    add(&tcs[1],"KEERTHI",4,90000,'a',8,10);
    add(&tcs[2],"rohit",5,100000,'A',13,8);
    
    // search for an employee with a specific id
    struct tcs *p;
    p=find(5);
    
    // print employee's name, id, salary, grade, and number of leaves taken
    if(p!=NULL){
        printf("name=%s\n",p->ename);
        printf("id=%d\n",p->eid);
        printf("salary=%.2f\n",p->esalary);
        printf("Band=%c\n",p->egrade);
        printf("leaves=%d\n",p->eleaves);
    }
    else{
        printf("wrong details\n");
    }
}
