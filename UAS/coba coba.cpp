#include <stdio.h>


int main () {
    int N, Q;
    scanf("%d %d", &N, &Q);
    int A[N];
     int find[Q];
    for(int i = 0; i<N ;i++){
        scanf("%d", &A[i]);    
    }
    for(int j = 0; j<Q; j++){
           scanf("%d", &find[j]);
     }
     
     int foundIndex;
     for(int k = 0; k<N; k++){
        if(find[k] == A[k]){
            foundIndex = k;
            break;
        }
      
     }
      int newIndex = foundIndex;
     for(int l = 0; l<Q; l++) {
        if(foundIndex != -1){
            printf("%d\n", newIndex);
        }
        else{
            printf("-1\n");
        }
     }


    return 0;
}
