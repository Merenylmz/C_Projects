#include <stdio.h>
#include <stdlib.h>

struct Personal
{
    int id;
    char name[50]; 
    int salary;
    
};

int addSalary(struct Personal *p, int n, int persent){
   p[n].salary += (int)(persent*p[n].salary)/100; 

   return p[n].salary;
}

void printInfo(struct Personal *personal, int x){
    printf("\nid: %d", personal[x].id);
    printf("\nAdi: %s", personal[x].name);
    printf("\nMaasi: %d", personal[x].salary);
}

int main(){
    int number = 0;
    printf("Personal sayi giriniz: ");
    scanf("%d", &number);

    struct Personal *personal;
    personal = malloc(sizeof(struct Personal)*number);

    for (int i = 0; i < number; i++)
    {
        personal[i].id = (i+1);
        printf("\n%d.isim giriniz: ", (i+1));
        scanf("%s", &personal[i].name);
        printf("\n%d.maasini giriniz: ", (i+1));
        scanf("%d", &personal[i].salary);
    }

    printInfo(personal, 1);
    addSalary(personal, 1, 50);
    printInfo(personal, 1);
    return 0;
}