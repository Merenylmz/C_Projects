#include <stdlib.h>
#include <stdio.h>

int main() {

    char text[100] = "Eren";
    char *p1;
    p1 = text; // bu ne demek; bu dizinin ilk elemanın adresini p1e ata demek yani şununla aynı p1 = &text[0]

    printf("dizinin ilk elemani: %c\n", *p1);
    printf("dizinin 3. elemani : %c", *(p1+2));

    return 0;
}