#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int counter = -1;
    for (int i = 0; i < 40; i++)
    {
        char deneme = (char)*(str+i);
        printf("\n%c", deneme);
        if (*(str+i) == '\0')
        {
            break;
        }
        counter++;
    }
    
    return counter;
}

void editedStr(char *str, int len){
    for (int i = 0; i < len; i++)
    {
        if (*(str+i) == ' ')
        {
            *(str+i) = '!';
        }
    }
}

int main(){
    char *str = (char*)malloc(sizeof(char)*40);
    printf("Metin giriniz: ");
    fgets(str, 100, stdin);
    int len = length(str);
    printf("\nUzunluk: %d", len);
    editedStr(str, len);
    printf("\nYazi: %s", str);

    free(str);
    return 0;
}