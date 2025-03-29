#include <stdio.h>
#include <stbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int bool = true;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<+arr[i+1] || arr[i]+>arr[i+1]){
            bool=true;
        }
        else{
            bool=false;
        }
    }
    if(bool==ture){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}