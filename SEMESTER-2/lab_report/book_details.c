#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10

// Define the book structure
struct book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    int i, pub_year;

    
    struct book books[MAX_BOOKS] = {
        {"To Kill a Mockingbird", "Harper Lee", 1960},
        {"1984", "George Orwell", 1949},
        {"The Catcher in the Rye", "J.D. Salinger", 1951},
        {"Pride and Prejudice", "Jane Austen", 1813},
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925},
        {"The Lord of the Rings", "J.R.R. Tolkien", 1954},
        {"The Hobbit", "J.R.R. Tolkien", 1937},
        {"The Adventures of Tom Sawyer", "Mark Twain", 1876},
        {"Animal Farm", "George Orwell", 1945},
        {"Brave New World", "Aldous Huxley", 1932}
    };

    // Prompt the user to enter the year of publication
    printf("Enter the year of publication: ");
    scanf("%d", &pub_year);

    // Print the details of books published in the given year
    printf("Books published in %d:\n", pub_year);
    for (i = 0; i < MAX_BOOKS; i++) {
        if (books[i].year == pub_year) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year of publication: %d\n", books[i].year);
            printf("\n");
        }
    }

    return 0;
}
