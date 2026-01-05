#include <stdio.h>


int main () {
    int T;
    scanf("%d", &T);
    int angka[T];
    char nama[1001];
    for(int i = 0; i<T; i++){
        scanf("%d", &angka[i]);
        scanf("%s ", nama[i]);
    }
    int NO;
    char tarName[1001];
    int found =-1;
    scanf("%d %s", NO, tarName);
    for(int i = 0; i<T; i++){
        if(NO == angka[i] && strcmp(tarName, nama[i])==0){
            found = i;
            break;
        }
    }
    if (found == -1){
        printf("bdsgnskjlfn\n");
    }
    printf("%d", found);

    



    return 0;
}