#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *text;
    text = (char*)malloc(50*sizeof(char));
    printf("Metin giriniz: ");
    fgets(text, sizeof(text), stdin);
    
    int length = strlen(text);
    for (int i = 0; i < (length-1); i++)
    {
        for (int b = 0; b < (i+1); b++)
        {
            printf("%c", *(text+b));
        }
        printf("\n");
    }
    
    return 0;
}