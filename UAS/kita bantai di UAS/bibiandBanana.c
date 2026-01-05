#include <stdio.h>


int main () {
    int T;
    scanf("%d", &T);
    int banana[10001];
    int amount;
    int weight;
    for(int i = 1; i<= T; i++){

        scanf("%d %d", &amount, &weight );
        int canEat = 0;
        for(int j = 0;j< amount; j++){
            scanf("%d", &banana[j]);
            if(weight == banana[j]){
                canEat++;
            }
        

        }
        printf("Case #%d: %d\n", i, canEat);
    }



    return 0;
}