#include<stdio.h>
int main(){
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    printf("%s and %s", str1, str2);
    return 0;
}