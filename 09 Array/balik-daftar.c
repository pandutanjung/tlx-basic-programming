#include <stdio.h>

int main() {
    int n = 0, arr[105];

    while (scanf("%d", &arr[n]) != EOF)
    {
        n++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]); // Added a space to separate the numbers
    }
    return 0;
}
