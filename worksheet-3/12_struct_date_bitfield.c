#include <stdio.h>

struct Date {
    unsigned int day   : 5; 
    unsigned int month : 4;  
    unsigned int year  : 12; 
};

int main() {
    struct Date today;

    today.day = 14;
    today.month = 11;
    today.year = 1999;

    printf("Date: %02u-%02u-%04u\n", today.day, today.month, today.year);

    return 0;
}