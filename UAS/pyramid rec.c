#include <stdio.h>

int p(int n , int k){
    if(k == 0|| k==n){
        return 1;
    }
    return p(n-1, k-1) + p(n-1, k);
}


int main () {
   int n;
   scanf("%d", &n); 
    for(int i = 0; i<n; i++){
        printf("%d ", p(n, i));
    }
}