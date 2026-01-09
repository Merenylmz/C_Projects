#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char *name;
    int no;
    float note;
};


int main(){
    int number = 0;
    printf("Kac Ogrenci girmek istersiniz: ");
    scanf("%d", &number);
    struct Student *student;
    student = malloc(sizeof(struct Student)*number);


    for (int i = 0; i < number; i++)
    {
        printf("%d. ogrencinin adini giriniz: ", (i+1));
        scanf("%s", &student[i].name);
        printf("\n%d. ogrencinin Numarasini giriniz: ", (i+1));
        scanf("%d", &student[i].no);
        printf("\n%d. ogrencinin Notunu giriniz: ", (i+1));
        scanf("%f", &student[i].note);
    }


    for (int j = 0; j < number; j++)
    {
        int sum = 0;
        int prev = student[j].no;
        while (prev > 0)
        {
            int digit = prev %10;
            sum+=digit;
            
            prev /= 10;
        }
        if ((student[j].no % sum) == 0)
        {
            printf("\n%d. ogrencinin No su harshad sayidir ", (j+1));
        }
    }
    
    
    free(student);
    
    return 0;
}