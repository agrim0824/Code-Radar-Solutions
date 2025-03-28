#include <stdio.h>
int main(){
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ch = 'A';
        for(j=0;j<n;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}