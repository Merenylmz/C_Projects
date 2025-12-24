#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct Student{
    char name[20];
    unsigned int schoolNo;
    unsigned int note;

};

struct Answer{
    char question[30];
    char answer[5];
};

struct Question{
    char question[30];
    char answer[5];
};


int main(){

    struct Student students[2];
    struct Question questions[2];
    struct Answer answers[2];

    
    char answer1, answer2;
    printf("Lutfen Cevap anahtarini giriniz: \n");
    scanf("%c%c", &answer1, &answer2);
    strcpy(answers[0].answer, answer1);
    strcpy(answers[1].answer, answer2);
    
        
    printf("Lutfen sorulari giriniz: \n");
    scanf("%c%c", &answer1, &answer2);
    strcpy(questions[0].answer, answer1);
    strcpy(questions[1].answer, answer2);

    students->note = 0;
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(questions[i].answer, answers[i].answer) == 1)
        {
            students->note += 50;
        }
    }


    printf("\n%d", students->note);
    
    return 0;
}