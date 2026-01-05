#include <stdio.h>

int countFibo = 0;

int Fibo(int n) {
    countFibo++;
    if(n==0) return 0;
    if(n==1) return 1;
    return Fibo(n-1) + Fibo(n-2);
}



int main () {
    int T;
    scanf("%d", &T);
    for(int i = 0; i<T; i++){
         countFibo = 0;
        int n;
        scanf("%d", &n);
        Fibo(n);
        printf("Case #%d: %d\n", i+1, countFibo);
    }



    return 0;
}