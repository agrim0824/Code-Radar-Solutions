#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case1:
            printf("Monday");
            break;
        case2:
            printf("Tuesday");
            break;
        case3:
            printf("Wednesday");
            break;
        case4:
            printf("Thursday");
            break;
        case5:
            printf("Friday");
            break;
        case6:
            printf("Saturday");
            break;
        case7:
            printf("Sunday");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}