#include <stdio.h>
#include <string.h>
int main () {
    int T;
    scanf("%d", &T);
    char sente[10000];
    for(int i = 0; i<T; i++){
        scanf("%s", sente);
        int len = strlen(sente);
        int isPalin = 1;
    
            int left = 0;
            int right = len-1;
            while(left<right){
                if(sente[left] != sente[right]){
                    isPalin = 0;
                    break;
                }
                 left++;
                 right--;
        }
       if(isPalin){
        printf("Case %d#: YES\n", i+1);
       }
       else{
        printf("Case %d#: No\n", i+1);
       }
    }




    return 0;
}