#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1  = mid-left +1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(i = 0; i< n1; i++){
        L[i] = arr[left+i];
    }
    for(j =0; j<n2; j++){
        R[j] = arr[mid+ 1+ j];
    }
    i = 0; 
    j = 0; 
    k = left;
    while(i <n1 && j< n2){
        if(L[i]<= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}


void mergeSort(int arr[], int left, int right){
    if(left<right){
        int mid = left + (right-left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}


//dalam search ada baiknya kesorting dulu
void binarySearh(int arr[], int low, int high, int key) {
    if(high>= low){
        int mid = low + (high-low)/2;
        if(arr[mid] == key){
            return mid; //mengembalikan indeks ke berapanya
        }
        else if(arr[mid] < key){
         return binarySearh(arr, mid+1, high, key);
        }
        else{
           
                return binarySearh(arr, low, mid, key);
        }
    }
    return -1;


}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}


int main () {
    int arr[] = {0, 1, 4, 2, 4, 6,17, 67, 9 , 10};
    int n = sizeof(arr)/sizeof(arr[0]);







    return 0;
}