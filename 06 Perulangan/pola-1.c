#include<stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        if (i%k == 0)
        {
            printf("*");
            if (i < n)
            {
                printf(" ");
            } else
            {
                printf("\n");
            }
        } else {
            printf("%d", i);
            if (i < n)
            {
                printf(" ");
            } else
            {
                printf("\n");
            }
        }
    }
    return 0;
}