#include <stdlib.h>
#include <stdio.h>

struct AddressBook
{
    char name[25];
    char surname[25];
    char number[13];
};


int main(){
    unsigned short number = 0;
    printf("Kac kisi gireceksiniz: ");
    scanf("%u", &number);

    struct AddressBook addressBook[number];

    for (int i = 0; i < number; i++)
    {
        printf("\nAdi giriniz: ");
        scanf("%s", &addressBook[i].name);
        printf("\nSoyadi giriniz: ");
        scanf("%s", &addressBook[i].surname);
        printf("\nNumara giriniz: ");
        scanf("%s", &addressBook[i].number);
    }


    for (int a = 0; a < number; a++)
    {
        printf("\nAdi : %s\n Soyadi : %s \n Numara: %s", addressBook[a].name, addressBook[a].surname, addressBook[a].number);
    }
    return 0;
}