#include<stdio.h>

int main(){
    double n;
    int f, c;
    scanf("%lf", &n);
    if ((int)n == n)
    {
        f = n;
        c = n;
    } else
    {
        if (n < 0)
        {
            c = (int)n;
            f = (int)n - 1; 
        } else if (n >= 0)
        {
            f = (int)n;
            c = (int)(n + 1);
        }
    }
    printf("%d %d", f, c);
    return 0;
}
