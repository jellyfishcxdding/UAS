#include <stdio.h>

// 1. DEFINITION
typedef struct { 
    int diff;
    int gold;
} Item; 

void bubbleSort(int n, Item brg[]){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            
            // LOGIC: Should we swap?
            int shouldSwap = 0; // 0 means no, 1 means yes

            // CONDITION 1: Primary Sort (Difficulty Ascending)
            if (brg[j].diff > brg[j+1].diff) {
                shouldSwap = 1;
            }
            // CONDITION 2: Tie-Breaker (If Diff is same, Check Gold Descending)
            else if (brg[j].diff == brg[j+1].diff) {
                if (brg[j].gold < brg[j+1].gold) { // Note: < because we want Descending (Big comes first)
                    shouldSwap = 1;
                }
            }

            // EXECUTE SWAP
            if (shouldSwap == 1) {
                // 2. USAGE (Correct way to declare temp)
                Item temp = brg[j]; 
                brg[j] = brg[j+1];
                brg[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);

    // 3. DECLARATION
    Item brg[1001]; // We can just use "Item" now, no need for "struct Item"

    for(int i = 0; i < n; i++){
        // Accessing the parts inside
        scanf("%d %d", &brg[i].diff, &brg[i].gold);
    }

    bubbleSort(n, brg);

    // Printing to prove it works
    printf("Sorted Results:\n");
    for(int i = 0; i < n; i++){
        printf("Diff: %d, Gold: %d\n", brg[i].diff, brg[i].gold);
    }

    return 0;
}