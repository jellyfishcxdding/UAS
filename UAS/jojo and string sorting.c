#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char txt[105];
    int vCount;
}Data;

//vocal counting code

int vcnt (char *s){
    int cnt = 0;
    int len = strlen(s);
    for(int i = 0; i<len; i++){
        char c = s[i];
        if(c == 'a'|| c =='i'|| c== 'u' || c== 'e' ||c=='o'){
            cnt++;
        }
    }
    return cnt;
}

// pembanding buat q sort

int cmp (const void *a, const void *b){
    Data  *dataA = (Data *)a;
    Data *dataB = (Data *)b;

    if(dataA->vCount != dataB -> vCount){
        return dataA->vCount - dataB->vCount;
    }
    return strcmp(dataA->txt, dataB->txt);
}


int main() {
    int N,M;
    scanf("%d %d", &N, &M);
    Data dt[105];
    for(int i =0; i<N; i++){
        scanf("%s", dt[i].txt);
        dt[i].vCount = vcnt(dt[i]. txt);
    }
    qsort(dt, N, sizeof(Data), cmp);

    for(int i = 0; i<N ;i ++){
        printf("%s\n", dt[i].txt);
    }


    return 0;
}