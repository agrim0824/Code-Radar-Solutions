#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d", &num1,&num2,&num3);
    float avg = (num1+num2+num3)/3.0f;
    printf("Average: %.2f",avg);
    return 0;

}