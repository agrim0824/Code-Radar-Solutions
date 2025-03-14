#include<stdio.h>
int main(){
    int num1,num2,res;
    char operation;
    scanf("%d %d %c",&num1,&num2,&operation);
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
            printf("error");
            return 1;
        }
        res = num1 / num2;
        break;
        default:
        printf("error");
        return 1;
    }
    printf("%d",res);
    return 0;
}