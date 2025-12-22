#include <stdlib.h>
#include <stdio.h>

int main() {
    char text[100];
    char *p1, *p2;
    short control = 1;
    printf("Bir Metin giriniz: ");
    gets(text); 
    for (p2 = text; *p2; p2++);
    /* burada *p2 kısmı \0 gelene kadar yani girilen değer harici bir ifadeye gidene kadar dönmesini sağlar buda girilen ifadenin  uzunluğunu almamızı sağlar

    */
                               
    p2--;
    
    
    for (p1 = text; p1 < p2 && control != 0; p1++, p2--)
    {
        if (*p1 != *p2)
        {
            control = 0;
        }
    }

    if (control == 1)
    {
        printf("\nGirilen ifade polindromdur");
    } else {printf("\nGirilen ifade polindrom degildir");}
    

    return 0;
}