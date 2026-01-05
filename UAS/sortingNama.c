#include <stdio.h>
#include <string.h>


//bubble

void swap(char a[], char b[]){
    char temp[1001];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b,temp);
}
//asc
void bubbleString(char arr[][1001], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(strcmp(arr[j], arr[j+1])>0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//dsc
void bubbleString(char arr[][1001], int n){
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(strcmp(arr[j], arr[j+1])<0){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


//merge sort



void merge(char arr[][100], int left, int mid, int right){
    int i, j, k;

    int n1 = mid -left +1;
    int n2 = right -mid;

    char L[n1][100], R[n2][100];

    for(i = 0; i< n1; i++){
        strcpy(L[i], arr[left+i]); //copy to temporarry array
    }

    for(j = 0; j<n2; j++){
        strcpy(R[j], arr[mid+1+j]); //copy to temporarry array
    }

    i = 0; //index awal array L
    j = 0; // index awal array R
    k = left; // index awal array gabungan

    while(i <n1 && j<n2){
        //jika L<= R  maka masukan L duluan (asc)

        //untuk dsc tinggal ubah tanda aja
        if(strcmp(L[i], R[j])<= 0){
            strcpy(arr[k], L[i]);
            i++;
        }
        else{
            strcpy(arr[k], R[i]);
            j++;
        }
        k++;
    }
    
    while(i<n1){
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }
    while(j<n2){
        strcpy(arr[k], R[j]);
            j++;
            k++;
        
    }


}

void mergeSort(char arr[][100], int left, int right){
    if(left<right){
        int mid = left + (right - left)/2;

        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main () {




    return 0;
}