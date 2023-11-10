#include<stdio.h>

int main() {
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {   
        int count=0;
        scanf("%d", &t);
            for (int i = 2; i * i <= t; i++)
            {
                if (t % i == 0)
                {   
                    count++;
                } 
            }   
        if (count <= 1)
        {
            printf("YA\n");
        } else
        {
            printf("BUKAN\n");
        }
    }   
    return 0;
}