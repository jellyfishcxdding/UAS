#include <stdio.h>

int no[5000005];
char name[5000005][15];
int main () {
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &no);
    }
  for(int i = 0; i<n; i++){
        scanf("%s", &na);
    }
    char tna[1001];
    int tno;
    scanf("%d %s", &tno, tna);

    int pos = -1;
    for(int i = 0; i<n; i++){
        if(tno == no[i]){
            pos = i;
            break;
        }
    }
    if(pos!= -1){
        printf("%d", pos+1);
    }
    else{
        printf("-1");
    }



    return 0;
}