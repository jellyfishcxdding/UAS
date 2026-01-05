#include <stdio.h>

double FACT(int x){
    if(x==1) return 1;
    else if(x==2) return 2;

    return x*FACT(x-2);
}

int main () {
    int n;
    scanf("%d", &n);
    int res = FACT(n);
    printf("%d", res);



    return 0;
}