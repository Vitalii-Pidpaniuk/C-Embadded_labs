#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    double price;
    int pages;
    char language[50];
    double weight;
    int year;
    struct Book* next;
};

struct Book* createBook(char* title, double price, int pages, char* language, double weight, int year) {
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));

    strcpy(newBook->title, title);
    newBook->price = price;
    newBook->pages = pages;
    strcpy(newBook->language, language);
    newBook->weight = weight;
    newBook->year = year;
    newBook->next = NULL;
    return newBook;
}

void printBooks(struct Book* head) {
    struct Book* current = head;
    while (current != NULL) {
        printf("Title: %s\n", current->title);
        printf("Price: %.2f\n", current->price);
        printf("Pages: %d\n", current->pages);
        printf("Language: %s\n", current->language);
        printf("Weight: %.2f kg\n", current->weight);
        printf("Year: %d\n", current->year);
        printf("\n");

        current = current->next;
    }
}

int main() {
    struct Book* book1 = createBook("Harry Potter and the Philosopher's Stone", 9.99, 223, "English", 0.5, 1997);

    struct Book* book2 = createBook("Harry Potter and the Chamber of Secrets", 10.99, 251, "English", 0.6, 1998);

    struct Book* book3 = createBook("Harry Potter and the Prisoner of Azkaban", 11.99, 317, "English", 0.7, 1999);

    book1->next = book2;
    book2->next = book3;

    printf("Harry Potter Book Series Information:\n\n");
    printBooks(book1);

    free(book1);
    free(book2);
    free(book3);

    return 0;
}
