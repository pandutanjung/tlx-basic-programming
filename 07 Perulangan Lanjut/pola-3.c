#include<stdio.h>

int main() {
    int n, counter=0;
    scanf("%d", &n);
    for (int baris = 0; baris < n; ++baris)
    {
        for (int kolom = 0; kolom <= baris; ++kolom)
        {
            printf("%d", counter);
            counter = (counter + 1) % 10;
        }
        printf("\n");
    }
    return 0;
}