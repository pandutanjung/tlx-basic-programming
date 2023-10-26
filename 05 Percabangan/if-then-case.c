#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (1 <= n && n < 10)
    {
        printf("satuan");
    } else if (10 <= n && n < 100)
    {
        printf("puluhan");
    } else if (100 <= n && n < 1000)
    {
        printf("ratusan");
    } else if (1000 <= n && n < 10000)
    {
        printf("ribuan");
    } else if (10000 <= n && n < 100000)
    {
        printf("puluhribuan");
    }
    return 0;
}