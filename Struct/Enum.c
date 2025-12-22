#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum Months{
    Jaunry,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

void getMonth(){
    enum Months month = 5;
    printf("%s", month);

}

int main(){
    getMonth();
    return 0;
}