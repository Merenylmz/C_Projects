#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void reverseText(char *text, int length){

    if (length>0)
    {
        printf("%c", *(text+length-1));
        reverseText(text, (length-1));
    }
};


int main(){
    char *text = (char*)malloc(50*sizeof(char));
    printf("Metin giriniz: ");
    fgets(text, sizeof(text), stdin);
    reverseText(text, strlen(text));


    return 0;
}