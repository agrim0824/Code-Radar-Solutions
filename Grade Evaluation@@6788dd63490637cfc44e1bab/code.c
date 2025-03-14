#include<stdio.h>
#include<ctype.h>
int main(){
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case 'A':
        case 'a':
        printf("Excellent");
        break;
        case 'B':
        case 'b':
        printf("Good");
        break;
        case 'C':
        case 'c':
        printf("Average");
        break;
        case 'D':
        case 'd':
        printf("Below Average");
        break;
        case 'F':
        case 'f':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
    }
    return 0;
}