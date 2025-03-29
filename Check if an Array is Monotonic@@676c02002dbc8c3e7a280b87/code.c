#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    bool increasing = true;
    bool decreasing = true;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<=arr[i+1]){
            decreasing=false;
        }
        if(arr[i]>=arr[i+1]){
            increasing=false;
        }
    }
    if(increasing || decreasing){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}