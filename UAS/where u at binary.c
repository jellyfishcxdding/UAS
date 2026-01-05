#include <stdio.h>


int main () {
    int n;
    scanf("%d", &n); getchar();
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    char name[1001];
    for(int i = 0; i<n; i++){
        scanf("%s", &name[i]);
    }
    int find;
    char dummy[1001];
    scanf("%d %[^\n]", find,  dummy);
    int left = 0;
    int right = n-1;
    int pos = -1;
    while(left <= right){
        int m = left + (right - left)/2;
        if(find == a[m]){
            pos = m;
            break;
        }
        //kalo nilai lebih kecil dari target
        else if( a[m]<find){
            left = m +1;
        }
        else {
            right = m -1;
        }

    }
    if(pos != -1){
        printf("%d\n", pos+1);
    }
    else {
        printf("-1\n");
    }
    




    return 0;
}