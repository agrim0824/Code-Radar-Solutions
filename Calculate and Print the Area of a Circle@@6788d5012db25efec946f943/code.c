#include<stdio.h>
int main(){
    float pi, radii, area;
    pi = 3.14;
    scanf("%f", &radii);
    area = pi * radii * radii;
    printf("Area: %.2f", area);
    return 0;
}