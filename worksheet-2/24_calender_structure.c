#include <stdio.h>
#include <stdlib.h>
struct Date {
    int day;
    int month;
    int year;
};
int isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
int Days(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year))
        return 29;
    return daysInMonth[month - 1];
}

long long countDays(struct Date *d) {
    long long totalDays = d->day;

    for (int m = 1; m < d->month; m++)
        totalDays += Days(m, d->year);

    for (int y = 0; y < d->year; y++)
        totalDays += isLeap(y) ? 366 : 365;

    return totalDays;
}

long long dateDifference(struct Date *d1, struct Date *d2) {
    long long days1 = countDays(d1);
    long long days2 = countDays(d2);

    long long diff = days1 - days2;
    if (diff < 0)
        diff = -diff;

    return diff;
}
int main() {
    struct Date *date1, *date2;

    date1 = (struct Date*)malloc(sizeof(struct Date));
    date2 = (struct Date*)malloc(sizeof(struct Date));

    if (date1 == NULL || date2 == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1->day, &date1->month, &date1->year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2->day, &date2->month, &date2->year);

    long long diff = dateDifference(date1, date2);
    printf("\nDifference between dates = %lld days\n", diff);

    free(date1);
    free(date2);

    return 0;
}