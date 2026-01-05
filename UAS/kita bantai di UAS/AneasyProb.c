#include <stdio.h>

int main (){
    int T;
    scanf("%d", &T);getchar();
    int a[T];
    int foundZ = 0;
    int foundOne = 0;

    for(int i =0 ; i<T; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0){
            foundZ++;
        }
        else if(a[i] == 1){
            foundOne++;
        }
    }
    if(foundZ > foundOne){
        printf("easy\n");
    }
    else{
        printf("not easy\n");
    }


    return 0;
}