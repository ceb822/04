#include <stdio.h>

int main(void)
{
    int op1, op2;

    //scanf
    printf("Input two integers:");
    scanf("%i %i", &op1, &op2);

    //printf
    printf("%i + %i = %i\n", op1, op2, op1 + op2);
    printf("%i - %i = %i\n", op1, op2, op1 - op2);
    printf("%i * %i = %i\n", op1, op2, op1 * op2);
    printf("%i / %i = %i\n", op1, op2, op1 / op2);
    printf("%i %% %i = %i\n", op1, op2, op1 % op2);

    return 0;
}