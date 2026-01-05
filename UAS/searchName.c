#include <stdio.h>




//basic linear search
//find a number

int linear(int arr[], int key, int n){
    for(int i = 0; i<n; i++){
        if(key == arr[i]){
            return i;
        }
        return -1; //if not found
    }
}

int binary(int arr[], int key, int n){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            left = mid+ 1;
        }
        else {
            right = mid-1;
        }
    }
    return -1; //not found
}

//string searching
int binarySearch(char *arr[], int low, int high, char *target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Store result of comparison to avoid calling strcmp multiple times
        int res = strcmp(arr[mid], target);

        // Check if target is present at mid
        if (res == 0) {
            return mid;
        }
        // If target is greater (alphabetically comes after mid), ignore left half
        if (res < 0) {
            low = mid + 1;
        }
        // If target is smaller (alphabetically comes before mid), ignore right half
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int linearSearch(char *arr[], int n, char *target) {
    for (int i = 0; i < n; i++) {
        // strcmp returns 0 if strings are identical
        if (strcmp(arr[i], target) == 0) {
            return i; // Return the index found
        }
    }
    return -1; // Return -1 if not found
}

int main () {





    return 0;
}