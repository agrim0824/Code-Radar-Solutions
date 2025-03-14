#include<stdio.h>
int main(){
    double num1,num2,res;
    char operation;
    scanf("%lf %lf %c",&num1,&num2,&operation);
    switch(operation){
        case '+':
        res = num1 + num2;
        break;
        case '-':
        res = num1 - num2;
        break;
        case '*':
        res = num1 * num2;
        break;
        case '/':
        if (num2==0){
            printf("Error");
            return 1;
        }
        res = num1 / num2;
        break;
        default:
        printf("Error");
        return 1;
    }
    printf("%.2lf",res);
    return 0;
}