#include<stdio.h>

int main(){
    long int x1, y1, x2, y2, jarakManhattan;
    scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
    long int x = x1 - x2;
    long int y = y1 - y2;
    if (x < 0 && y < 0)
    {
        x = x * -1;
        y = y * -1;
        jarakManhattan = x + y;
    } else if (x < 0)
    {   
        x = x * -1;
        jarakManhattan = x + y;
    } else if (y < 0)
    {
        y = y * -1;
        jarakManhattan = x + y;
    } else if (x >= 0 && y >= 0)
    {
        jarakManhattan = x + y;
    }
    printf("%ld", jarakManhattan);
    return 0;
}