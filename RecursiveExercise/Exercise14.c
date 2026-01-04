#include <stdlib.h>
#include <stdio.h>


int textLength(char *text){
    if (*text == '\0')
    {  
        return 0;
    } else {
        return (1+textLength((text+1)));
    }
}


int main(){
    char text[50];
    printf("Metin giriniz: ");
    fgets(text, sizeof(text), stdin);
    printf("\n%d", textLength(text)-1);
    return 0;
}