#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 30
#define MAX_AUTHOR_LENGTH 30
#define ISBN_LENGTH 13

struct book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int publication_year;
    char ISBN[ISBN_LENGTH];
    float price;
};

int main() {
    
    struct book myBook = {
        "Introduction to C Programming",  
        "John Smith",                      
        2022,                              
        "9780131103627",                  
        49.99                              
    };

    
    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
