#include <stdio.h>


int n = 0;
typedef struct
{
    char city[1009];
    float suhu;
    char tipe;
 } temperature;


temperature t[1001];

FILE *FP;

void readFile(temperature t[]){
    FP = fopen("testdata.in", "r");
    if(FP == NULL) {
        printf("sgbdskjgbzdfijghnd\n");
        return;
    }
    while(fscanf(FP, "%[^#]#%0f%c",
        t[n].city,
        &t[n].suhu,
        t[n].tipe
    
    )!= EOF){
        n++;
    }
    fclose(FP);

}

void sort(temperature t[]){
    for(int i = 0; i< n-1; i++){
        for(int j = 0;j<n-i-1; j++){
            if(t[j].suhu > t[j+1].suhu){
                temperature temp = t[j];
                t[j] = t[j+1];
                t[j+1] = temp;
            }
        }
    }
}

void p(temperature t[]){
    for(int i = 0; i< n; i++){
        printf("%s is %.2f%c\n",
        t[i].city,
        t[i].suhu,
        t[i].tipe
        );
    }
}


int main () {
    readFile(t);

    for(int i = 0; i<n; i++){
        if(t[i].tipe == 'C'){
            t[i].suhu = (t[i].suhu - 32) * 5/9;
        }
        else if(t[i].tipe == 'F'){
          t[i].suhu = (t[i].suhu + 32) * 9/5;
        }
    }
    sort(t);
    p(t);



    



    return 0;
}

