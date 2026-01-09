#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *text = (char*)malloc(sizeof(char)*50);
    printf("Metin giriniz: ");
    scanf("%s", &text);
    printf("asdasd");
    int length = strlen((char*)text);
    printf("%d", length);
    char *arr = (char*)calloc(80, sizeof(char));
    for (int i = 0; i < length; i++)
    {
        int ascii = (int)text[i];
        if (ascii < 97 && ascii >= 65)
        {
            int index = ascii - 65;
            arr[index] += 1; 
        } else {
            int index = ascii - 97;
            arr[index] += 1; 
        }
    }


    printf("\n%d", arr[0]);

    return 0;
}