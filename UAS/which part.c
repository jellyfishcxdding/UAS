#include <stdio.h>
#include <string.h>

    int no[500005];
    char na[50005][15];

int main () {
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &no[i]);
    }
    for(int i = 0; i<n; i++){
        scanf("%s", na[i]);
    }
    int tno;
    scanf("%d", &tno);
    
    int l = 0;
    int r = n-1;
    int pos = -1;

    //kalo soalnya bilang gak boleh naive approach
    while (l<=r){
        int m = l + (r-l)/2;
        if(no[m] == tno){
            pos = m;
            break;
        }
        else if( no[m] > tno){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }

if (pos != 1)
{
    int myPos = pos+1;
    int parts = n/4;
    int myPart = ((myPos-1)/parts) +1;
    printf("%d %s %d\n", myPos, na[pos], myPart);
}

else{
    printf("nigga\n");
}


    return 0;
}