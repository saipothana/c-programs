//learn structures by building simple projects

//Contact Book: Create a program that allows a user to store information about contacts (name, phone number, address, etc.) in a structure.
// The user should be able to add, delete, and search for contacts, as well as display all the contacts stored in the program.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct contactBook{
    char name[30];
    int number;
    char whatsapp;
    char address[30];
    int deleted;
};

void add_contacts(struct contactBook *add,int *size){
    printf("Enter Firstname and lastname: ");
    scanf("%s",add[*size].name);

    printf("Enter number without special chars including ISD: ");
    scanf("%d",&add[*size].number);
    printf("Is whatsapp available (Y/N): ");
    scanf(" %c",&add[*size].whatsapp);
    printf("Enter address: ");
    scanf("%s",add[*size].address);
   // (*size)++;
    printf("Contact added successfully!\n");
}

void del_contacts(struct contactBook *del,int *size){
    int number,i,j;
    printf("Enter number: ");
    scanf("%d",&number);

    for(i=0;i<*size;i++){
        if(number==del[i].number){
            for(j=i;j<*size-1;j++){
                del[j]=del[j+1];
            }
            (*size)--;
            printf("%s is deleted from your contact list\n",del[i+1].name);
            
            return;
        }
    }

    printf("Entered number not found in your contacts\n");
}

void find_a_contact(struct contactBook *find,int *size){
    char name[30];
    printf("Enter name of contact you want to search (firstname and lastname): ");
    scanf("%s",name);
    int i,j=0;
    for(i=0;i<*size;i++){
        if((strcmp(name,find[i].name))==0){
            j=1;
            printf("Name: %s\n",find[i].name);
            printf("Number: %d\n",find[i].number);
            printf("Whatsapp: %c\n",find[i].whatsapp);
            printf("Address: %s\n",find[i].address);
        }
    }
    if(j==0){
        printf("Entered name not found in your contacts\n");
    }
}

void update_contact(struct contactBook *upd,int *size){
    int number;
    printf("Enter number to update the contact: ");
    scanf("%d",&number);

    int i,flag=0;
    for(i=0;i<*size;i++){
        if(number==upd[i].number){
            flag=1;
            printf("enter name\n");
            scanf("%s",upd[i].name);
                        printf("Enter the new address: ");
            scanf("%s",upd[i].address);
            printf("Contact updated successfully!\n");
            return;
        }
    }
    if(flag==0){
        printf("Number not found in your contacts\n");
    }
}

void print(struct contactBook *prn,int *size){
    int i,j=1;
    for(i=0;i<*size;i++){
        if(!prn[i].deleted){
            printf("=========Contact %d=========\n",j);
                printf("Name: %s\n",prn[i].name);
                printf("Number: %d\n",prn[i].number);
                printf("Whatsapp: %c\n",prn[i].whatsapp);
                printf("Address: %s\n",prn[i].address);
            printf("=======End of contact %d=======\n",j); 
            j++;
        }
    }
    printf("A total of %d contacts are available\n",j-1);
}

int main(){
    int size=0;
    struct contactBook *list = (struct contactBook *)malloc(sizeof(struct contactBook)*50);
    int choice;
    while(1){
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. Find a Contact\n");
        printf("4. Update Contact\n");
        printf("5. Display all Contacts\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: add_contacts(list,&size);
            size++;
                    break;
            case 2: del_contacts(list,&size);
            list->deleted--;
            size++;
                    break;
            case 3: find_a_contact(list,&size);
            size++;
                    break;
            case 4: update_contact(list,&size);
            size++;
                    break;
            case 5: print(list,&size);
            size++;
                    break;
            case 6: free(list);
                    exit(0);
            default: printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}
