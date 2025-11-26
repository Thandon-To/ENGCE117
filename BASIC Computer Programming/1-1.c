#include <stdio.h>

int main() {
    int N, i;

    if (scanf("%d",&N) != 1)
    {
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }
    
    return 0;
}