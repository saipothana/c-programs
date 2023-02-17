//structures  are the collection of diffierent data type placed in a single type

#include<stdio.h>
#include<conio.h>


    struct book_bank
    {
        /* data */
        int pages;
        char title[30];
        char author[20];

    };

void main(){
   // struct book_bank book1,book2,book3;

   struct book_bank book1={100,"letusc","veej"};
   struct book_bank  book2={200,"java","james"};
   struct book_bank  book3={500,"java_se","grossling"};
printf("==============book-1===========\n");
    printf("pages =%d\n",book1.pages);
    printf("title=%s\n",book1.title);
    printf("author=%s\n",book1.author);
    printf("==============book-1===========\n");

    printf("==============book-2===========\n");
    printf("pages =%d\n",book2.pages);
    printf("title=%s\n",book2.title);
    printf("author=%s\n",book2.author);
    printf("==============book-2===========\n");

    printf("==============book-1===========\n");
    printf("pages =%d\n",book3.pages);
    printf("title=%s\n",book3.title);
    printf("author=%s\n",book3.author);
    printf("==============book-1===========\n");


    
}