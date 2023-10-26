#include<stdio.h>

int main() {
    
    float A, T;
    float luasSegitiga;
    scanf("%f %f", &A, &T);
    luasSegitiga = A * T / 2;
    printf("%.2f", luasSegitiga);
    return 0;
}