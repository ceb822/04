#include <stdio.h>

int main(void)
{
    int sec;

    printf("input the second: ");
    scanf("%i", &sec);

    // 시: sec/3600, 분: (sec%3600)/60, 초: sec%60
    printf("The time for %i second is %i %i %i\n", sec, sec/3600, (sec%3600)/60, sec%60);

    return 0;
}