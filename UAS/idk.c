#include <stdio.h>


int main () {


    int a,b;
    scanf("%d %d", &a, &b);
    int angka[1001][1001];
    for(int i = 0; i<a; i++){
        for(int j =0; j<b; j++){
            scanf("%d", &angka[i][j]);
        }
    }

    int maxCol = -1000000000;
    for(int j = 0; j<b; j++){
        int sum = 0;
        for(int i = 0; i<a; i++){
            sum += angka[i][j];
        }
        if(maxCol<sum){
            maxCol = sum;
        }
    }
    printf("%d", maxCol);



    return 0;
}