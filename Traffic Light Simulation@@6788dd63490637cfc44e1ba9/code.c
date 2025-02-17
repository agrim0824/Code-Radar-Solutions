#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'R' || 'r':
            printf("Stop");
            break;
        case 'G' || 'g':
            printf("Go");
            break;
        case 'Y'|| 'y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
    }
    return 0;   
}