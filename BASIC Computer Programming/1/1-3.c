#include <stdio.h>

int main()
{
    int num1, num2, operationCode, result;

    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3)
    {
        return 1;
    } // end if

    if (operationCode == 1)
    {
        result = num1 + num2;
        printf("%d", result);
    } else if (operationCode == 2)
    {
        result = num1 - num2;
        printf("%d", result);
    } else if (operationCode == 3)
    {
        result = num1 * num2;
        printf("%d", result);
    } else if (operationCode == 4)
    {
        result = num1 / num2;
        printf("%d", result);
    } else {
        printf("Invalid Operation");
    } // end if

    return 0;
}