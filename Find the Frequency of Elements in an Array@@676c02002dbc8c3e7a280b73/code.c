#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int frequency=0;
    for(int i=0,j=0; i<=j; i++,j--){
        if(arr[i]==arr[j]){
            frequency++;
        }
    }
    for (int i=0; i<=n-1; i++){
        printf("%d %d\n",arr[i],frequency);
    }
    
}