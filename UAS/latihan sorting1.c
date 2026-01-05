#include <stdio.h>
#include <string.h>

void bubble(int arr[], int jumlah){
    for(int i = 0; i<jumlah-1; i++){
        for(int j = 0; j<jumlah-1-i; j++){
            if(arr[j]> arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



int main () {

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]); 
    }
    bubble(a,n);
    int Q;
    scanf("%d", &Q);
    for(int i = 0; i<Q; i++){
        int target;
        scanf("%d", &target);
        int found = -1;
        for(int j = 0; j<n; j++){
            if(target == a[j]){
                 found = j;
            break;
            }
           
        }
        if(found != -1){
            printf("Artifact are found at index %d\n", found+1);
        }
        else{
            printf("Artifact are not found\n");
        }
    }
    


    return 0;
}