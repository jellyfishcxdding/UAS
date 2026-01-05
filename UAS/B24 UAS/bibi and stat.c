#include <stdio.h>

FILE *fp;
int main () {
    fp = fopen("testdata.in", "r");
    if(fp == NULL){
        printf("sjhiewjfiowhufilews");
    }
    int T;
    float num[1001];
    fscanf(fp, "%d", &T);
    for(int i = 0; i<T; i++){
        fscanf(fp, "%f", &num[i]);
    }
    float jumlah = 0;
    for (int i = 0; i<T; i++){
        jumlah += num[i];
    }
    float avg = jumlah /(float)T;

    printf("%.2f", avg);



    fclose(fp);

    return 0;
}