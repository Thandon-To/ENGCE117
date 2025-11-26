#include <stdio.h>

int main() {
    int N, Sum = 0, i;

    if (scanf("%d", &N) != 1)
    {
        return 1;
    } // end if

    for (i = 1; i <= N; i++)
    {
        Sum = Sum + i;
    }
    
    printf("%d",Sum);
    return 0;
}
