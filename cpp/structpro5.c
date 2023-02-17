#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Contact {
    char name[100];
    char phone_number[15];
    char address[200];
};

struct ContactBook {
    struct Contact* contacts;
    int size;
};



void add_contact(struct ContactBook* book, char* name, char* phone_number, char* address) {
    struct Contact new_contact;
    strcpy(new_contact.name, name);
    strcpy(new_contact.phone_number, phone_number);
    strcpy(new_contact.address, address);
    book->contacts = (struct Contact*) realloc(book->contacts, sizeof(struct Contact) * (book->size + 1));
    book->contacts[book->size++] = new_contact;
}

void delete_contact(struct ContactBook* book, char* name) {
    int index = -1;
    for (int i = 0; i < book->size; i++) {
        if (strcmp(book->contacts[i].name, name) == 0) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < book->size - 1; i++) {
            book->contacts[i] = book->contacts[i + 1];
        }
        book->size--;
        book->contacts = (struct Contact*) realloc(book->contacts, sizeof(struct Contact) * book->size);
    }
}

struct Contact* search_contact(struct ContactBook* book, char* name) {
    for (int i = 0; i < book->size; i++) {
        if (strcmp(book->contacts[i].name, name) == 0) {
            return &book->contacts[i];
        }
    }
    return NULL;
}

void display_contacts(struct ContactBook* book) {
    for (int i = 0; i < book->size; i++) {
        printf("Name: %s\n", book->contacts[i].name);
        printf("Phone Number: %s\n", book->contacts[i].phone_number);
        printf("Address: %s\n", book->contacts[i].address);
    }
}
int main(int argc, char* argv[]) {
    struct ContactBook book = {NULL, 0};
    char name[100], phone_number[15], address[200];
    int c;

    while (1) {
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Display All Contacts\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);
        while ((c = getchar()) != '\n' && c != EOF) {}

        switch (choice) {
            case 1:
                printf("Enter contact name: ");
                scanf("%s", name);
                while ((c = getchar()) != '\n' && c != EOF) {}
                printf("Enter phone number: ");
                scanf("%s", phone_number);
                while ((c = getchar()) != '\n' && c != EOF) {}
                printf("Enter address: ");
                scanf("%s", address);
                while ((c = getchar()) != '\n' && c != EOF) {}
                add_contact(&book, name, phone_number, address);
                break;
            case 2:
                printf("Enter name of contact to search: ");
                scanf("%s", name);
                struct Contact* found_contact = search_contact(&book, name);
                while ((c = getchar()) != '\n' && c != EOF) {}
                if (found_contact != NULL) {
                    printf("Name: %s\n", found_contact->name);
                    printf("Phone Number: %s\n", found_contact->phone_number);
                    printf("Address: %s\n", found_contact->address);
                } else {
                    printf("Contact not found.\n");
                }
                break;
            case 3:
                printf("Enter name of contact to delete: ");
                scanf("%s", name);
                while ((c = getchar()) != '\n' && c != EOF) {}
                delete_contact(&book, name);
                break;
            case 4:
                display_contacts(&book);
                break;
            case 5:
                free(book.contacts);
                return 0;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
}
