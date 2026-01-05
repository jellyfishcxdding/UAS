#include <stdio.h>

struct barang{
    char ID[10001];
    char name[1001];
    long long nilai;
};

int main () {
    struct barang Item[1001];
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%s %s %lld", Item[i].ID, Item[i].name, &Item[i].nilai);
    }

    double median;
    if(n%2 != 0){
        median = (double)Item[n/2].nilai;
    }

    else{
        long long sum = Item[(n/2)-1].nilai + Item[n/2].nilai;
        median =  sum / 2.00;
    }

    //printing the item that are large than the median

    





    return 0;
}