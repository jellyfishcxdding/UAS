#include <stdio.h>
#include <string.h>

char kamus[1001][11];


void sort(char kamus[][11], int jumlah){
    for(int i = 0; i<jumlah-1; i++){
        for(int j = 0; j<jumlah -i-1; j++){
            if(strcmp(kamus[j], kamus[j+1])>0){
                
            }
        }
    }
}


int main () {

int tc;
scanf("%d", &tc);

for(int i = 0; i<tc; i++){
    scanf(" %s", &kamus[i]);
    int Q;
    scanf("%d", &Q);
    for(int j = 0; j<Q; j++){
       char find[1001];
       scanf("%c", find);
       int index = -1;
       for(int k = 0; k<tc; k++){
            if(strcmp(find, kamus)==0){
                index = k;
                break;
            }
       } 
       if(index != -1){
            printf("find at %d\n");
       }

    }
}



    return 0;
}