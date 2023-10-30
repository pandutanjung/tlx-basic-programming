#include<stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d", &n);
    scanf("%d", &a);
    b = a;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &m);
        if (a < m)
        {
            a = m;
        } if (b > m)
        {
            b = m;
        }
    }
    printf("%d %d", a, b);
    return 0;
}