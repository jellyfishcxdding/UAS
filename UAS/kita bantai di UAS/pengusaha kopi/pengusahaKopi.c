#include <stdio.h>
#include <stdio.h>
typedef struct{
    char name[1001];
    char code[1001];
    int price;
}data;



int main() {
    data dt[1001];
   FILE *fp = fopen("testdata.in", "r");
    int T;
   fscanf(fp, "%d", &T);

   for(int i = 0;i<T; i++){
        fscanf(fp, " %[^#]#%s", dt[i].name, dt[i].code);
   }

   //sorting
   for(int i = 0; i<T-1; i++){
    for(int j = 0;j< T-i-1;j++){
        if(strcmp(dt[j], dt[j+1])>0){
            data temp = dt[j];
            dt[j] = dt[j+1];
            dt[j+1] = temp;
        }
    }
   }

   fclose(fp);
   for(int i = 0; i<T; i++){
        if(strcmp(dt[i].code, "300")==0){
            printf("%s - 3");
        }
   }

    return 0;
}