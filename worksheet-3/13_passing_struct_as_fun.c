#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

void printDate(struct Date d) {
    printf("Date: %02d-%02d-%04d\n", d.day, d.month, d.year);
}

struct Date getNextDate(struct Date d) {
    d.day += 1;
    if (d.day > 30) {
        d.day = 1;
        d.month += 1;
        if (d.month > 12) {
            d.month = 1;
            d.year += 1;
        }
    }
    return d;
}

int main() {
    struct Date d = {30, 12, 2024};
    printDate(d);         
    struct Date t = getNextDate(d); 
    printDate(t);

    return 0;
}