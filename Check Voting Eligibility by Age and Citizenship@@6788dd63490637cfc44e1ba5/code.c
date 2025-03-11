#include<stdio.h>
int main(){
    int age, n;
    scanf("%d %d",&age,&n);
    if((age>18)&&(n==1)){
        printf("Eligible");
    }
    else if((age<18)&&(n==1)){
        printf("Not Eligible");
    }
    else if(n!=1){
        printf("Not Eligible");
    }
    return 0;
}