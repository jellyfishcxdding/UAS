#include <stdio.h>
#include <string.h>

FILE *fp;

typedef struct{
    char nama[1001];
    int nilai;
} data;

// Sort Function: Descending (Highest to Lowest)
void bubble(data dt[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            // If current is LESS than next, swap (pushes small numbers to the end)
            if(dt[j].nilai < dt[j+1].nilai){
                data temp = dt[j];
                dt[j] = dt[j+1];
                dt[j+1] = temp;
            }
        }
    }
}


int search(data dt[], int n, char name[]){
    for(int i = 0; i < n; i++){
        if(strcmp(dt[i].nama, name) == 0){
            return i + 1; 
        }
    }
    return -1;
}

int main () {
    data dt[1009];
    // Make sure this filename matches your file (e.g., "testdata.in" or "t.in")
    fp = fopen("testdata.in", "r"); 
    
    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }
    
    int t;
    fscanf(fp, "%d", &t);
    
    for(int i = 0; i < t; i++){
        int n;
        fscanf(fp, "%d", &n); 
        
        for(int j = 0; j < n; j++){
        
             fscanf(fp, " %[^#]#%d", dt[j].nama, &dt[j].nilai);
        }
        
        bubble(dt, n);
        
        char targetName[1001];

        fscanf(fp, " %[^\n]", targetName);
        
        int r = search(dt, n, targetName);
        printf("Case #%d: %d\n", i+1, r);
    }

    return 0;
}