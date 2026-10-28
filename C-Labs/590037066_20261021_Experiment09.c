/* WAP to store and display the details of a book using a structure */

#include <stdio.h>

struct book {
    int bookID;
    char title[20];
    char authorName[20];
    float price;
};

int main() {
    struct book a = {43454332, "LetUsC", "Yashvant Kanetkar", 250};

    printf("bookID= %d\n",a.bookID);
    printf("title= %s\n",a.title);
    printf("authorName= %s\n",a.authorName);
    printf("price= %.2f",a.price);

return 0;
}