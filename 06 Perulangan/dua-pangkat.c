#include<stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);
    while (n%2 == 0)
    {
        n/=2;
    }
    if (n == 1)
    {
        printf("ya");
    } else
    {
        printf("bukan");
    }
    return 0;
}