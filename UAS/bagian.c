#include <stdio.h>
#include <string.h>

 int no[1001];
    char name[10001][10];
int main () {

    int n;
    scanf("%d", &n);
   
    for(int i = 0;i<n; i++){
        scanf("%d", &no[i]);
    }

    for(int i = 0; i<n ; i++){
        scanf("%s", name[i]);
    }

    int findN;
    char findName[1001]; //nama cuma dummy btw
    scanf("%d %s", &findN, findName);

    int left = 0;
    int right = n-1;
    int pos = -1;
    while(left <= right){
        int mid = left + (right - left)/2;

        if(no[mid]== findN){
            pos = mid;
            break;
        }

        else if(no[mid]<findN){
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }
    if(pos != -1){
        int myPos = pos + 1;
        int part = n/4;
        int myPart = ((myPos-1)/part) + 1;
        printf("%d %d %d", myPos, name[pos], myPart);
    }

    return 0;
}