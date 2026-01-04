#include <stdlib.h>
#include <stdio.h>

struct ValueType
{
    int type;
    union
    {
        char character;
        float number;
    }unit;
    
    char name[20];
};



int main(){
    struct ValueType valueType[20];
    char forError;
    int i = -1;
    do
    {
        i++;
        printf("Lutfen bir tamsayi giriniz: ");
        scanf("%d", &valueType[i].type);
        scanf("%c", &forError);
        if (valueType[i].type == 1)
        {
            printf("\nKarakter giriniz: ");
            scanf("%c", &valueType[i].unit.character);
            scanf("%c", &forError);
        } else if (valueType[i].type == 0)
        {
            printf("\nSayi giriniz: ");
            scanf("%f", &valueType[i].unit.number);
            scanf("%c", &forError);
        }

    } while (valueType[i].type == 0 || valueType[i].type == 1);
    

    float avg = 0;
    for (int a = 0; a <= i; a++)
    {
        if (valueType[a].type == 0)
        {
            avg += valueType[a].unit.number / (i);
        }

    }

    printf("\nOrtalama: %.2f", avg);
    return 0;
}