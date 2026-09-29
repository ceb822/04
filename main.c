#include <stdio.h>

int main(void)
{
    int year;

    printf("Input the year :");
    scanf("%i", &year);

    printf("Is the year %i a leap year? : %i\n", year, ((year%4==0)&&(year%100!=0)) || (year%400==0) );

    return 0;
}