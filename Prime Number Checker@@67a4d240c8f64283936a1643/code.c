#include <stdio.h>
int isPrime(int a);
int isPrime(int n){
    int i,count=0;
    for (i=1;i<=n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count == 2){
        return 1;
    }
    else{

        return 0;
    }
}