#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    unsigned int ISBN;
    char name[50];
    char author[50];
    unsigned int year;
    unsigned short pages;
    unsigned short shelfStatus; // 1/0
// unsigned int ISBN; char name[50]; char author[50]; unsigned int year; unsigned short pages; unsigned short shelfStatus; 
} Book;


Book* newBook(Book bookInfos){
    Book *p = (Book*) malloc(sizeof(Book));
    if(p == NULL) {
        return NULL;
    }
   
    *p = bookInfos;
    return p;
};

void printInformations(Book *array[3], unsigned int length, unsigned int searchOrNot){
    if (searchOrNot != 0)
    {
        printf("\n\nSadece Istenilen Kitabin bilgileri: ");
        printf("\nISBN: %d\n", array[searchOrNot]->ISBN);
        printf("Name: %s\n", array[searchOrNot]->name);
        printf("Author: %s\n", array[searchOrNot]->author);
        printf("Year: %d\n", array[searchOrNot]->year);
        printf("Pages: %d\n", array[searchOrNot]->pages);
        printf("Shelf Status: %s\n", (array[searchOrNot]->shelfStatus == 1 ? "Var": "Odunc"));
    } else {
        for (unsigned int i = 0; i < length; i++)
        {
            printf("\nISBN: %d\n", array[i]->ISBN);
            printf("Name: %s\n", array[i]->name);
            printf("Author: %s\n", array[i]->author);
            printf("Year: %d\n", array[i]->year);
            printf("Pages: %d\n", array[i]->pages);
            printf("Shelf Status: %s\n", (array[i]->shelfStatus == 1 ? "Var": "Odunc"));
        }
    }
    
}

int main(){ 
    Book *arr[3];
    for (unsigned int i = 0; i < 3; i++)
    {
        Book newB;
        printf("\nSirayla %d.Kitap bilgilerini(ISBN, name, author, year, pages, shelfStatus) giriniz:", (i+1));
        scanf("%u %s %s %u %u %u", &newB.ISBN, &newB.name, &newB.author, &newB.year, &newB.pages, &newB.shelfStatus);
        arr[i] = newBook(newB);
    }
    
    printInformations(arr, 3, 0);

    unsigned int isbn = 0;
    printf("\nArama yapmak icin ISBN bilgisi giriniz: ");
    scanf("%u", &isbn);
    for (int a = 0; a < 3; a++)
    {
        if (arr[a]->ISBN == isbn)
        {
            printInformations(arr, 3, a);
            return 0;
        }
    }
    free(arr);
    return 0;
}