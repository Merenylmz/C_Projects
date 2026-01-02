#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *text;
    text = (char*) malloc(50*sizeof(char));
    printf("Metin giriniz: ");
    gets(text);
    
    int length = strlen(text);

    for (int i = length; i >= 0; i--)
    {
        printf("%c", *(text+i));
    }

    return 0;
}