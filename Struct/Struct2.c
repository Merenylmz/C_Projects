#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student
{
    unsigned int schoolNo;
    char name[25];
    char surname[25];
    unsigned int old;

};


int main(){
    struct Student student1, student2;
    student1.schoolNo = 455138;
    strcpy(student1.name, "Eren");
    strcpy(student1.surname, "Yilmaz");
    student1.old = 18;
    student2 = student1;
    
    printf("%i", student2.old);
    return 0;
}