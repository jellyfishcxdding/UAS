#include <stdio.h>
#include <string.h>

int main () {
    char S[1001];
    char U[1001];
    scanf("%s", S);
    scanf("%s",U);
    int ls = strlen(S);
    int lU = strlen(U);
    int cA[26] = {0};
    int cB[26] = {0};
    for(int i = 0; i<ls; i++){
        int index = S[i] - 'a';
        cA[index]++;
    }

    for(int i = 0; i<lU; i++){
        int index = U[i] -'a';
        cB[index]++;
    }


        //minimumNumlogic
    for(int k = 0; k<26; k++){
        int printIt = 0;
        if(cA[k] < cB[k]){
            printIt = cA[k];
        }
        else{
            printIt = cB[k];
        }

        for(int l = 0;l<printIt; l++){
            printf("%c", k + 'a');
        }
    }



    return 0;
}