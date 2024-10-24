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
    
    struct book myBook;

    
    printf("Enter the book title: ");
    fgets(myBook.title, MAX_TITLE_LENGTH, stdin);
    myBook.title[strcspn(myBook.title, "\n")] = '\0';  

    printf("Enter the author's name: ");
    fgets(myBook.author, MAX_AUTHOR_LENGTH, stdin);
    myBook.author[strcspn(myBook.author, "\n")] = '\0'; 

    printf("Enter the publication year: ");
    scanf("%d", &myBook.publication_year);

    printf("Enter the ISBN: ");
    scanf("%s", myBook.ISBN);

    printf("Enter the price: ");
    scanf("%f", &myBook.price);

    
    printf("\nBook Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
