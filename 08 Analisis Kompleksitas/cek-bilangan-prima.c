#include<stdio.h>

int main() {
    int n, t, prima;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {   
        scanf("%d", &t);
        prima = 1;  
        if (t <= 1)
        {
            prima = 0;
        } else
        {
            for (int i = 2; i * i <= t; i++)
            {
                if (t % i == 0)
                {
                    prima = 0;
                    break;
                } 
            }   
        }
        if (prima == 0)
        {
            printf("BUKAN\n");
        } else
        {
            printf("YA\n");
        }
    }   
    return 0;
}
