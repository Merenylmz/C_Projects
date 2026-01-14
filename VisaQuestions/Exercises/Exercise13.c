#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *str = (char*)malloc(50*sizeof(char));
    printf("Metin giriniz: ");
    scanf("%s", str);

    int length = strlen(str);
    printf("%d", length);
    for (int i = 0; i < length-1; i++)
    {
        char firstLetter = str[0];

        for (int j = 0; j < length-1; j++)
        {
            str[j] = str[j+1];
        }

        str[length-1] = firstLetter;

        printf("\n%s", str);
    }
    

    return 0;
}


// yazilim
// azilimy
// zilimya
// ilimyaz
// limyazi