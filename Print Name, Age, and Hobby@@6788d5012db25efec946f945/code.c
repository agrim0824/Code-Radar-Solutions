#include <stdio.h>
int main(){
    char name[100], hobby[100];
    int age;
    scanf("%c %d %c", &name, &age, &hobby);
    printf("Name: %c \n Age: %d \n Hobby: %c", name, age, hobby);
    return 0;
}