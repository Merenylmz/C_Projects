#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char *start, char *finish){
    if (start >= finish)
    {
        return 1;
    } 
    if(*start != *finish)
    {
        return 0;
    }
    
    return isPalindrome(start+1, finish-1);
}

int main(){
    char *text = (char*)malloc(sizeof(char)*50);
    printf("Metin giriniz: ");
    scanf("%s", text);
    int length = strlen(text);
    
    printf("\n%s", (isPalindrome(text, text+length-1) == 1 ? "Palindrom sayidir":"Palindrom sayi degildir"));

    free(text);
    return 0;
}