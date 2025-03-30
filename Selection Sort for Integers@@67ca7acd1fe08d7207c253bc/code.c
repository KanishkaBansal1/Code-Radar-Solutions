#include <limits.h>
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<arr[minidx]){
                min=arr[j];
                minidx=j;
            }
            int temp=arr[minidx];
            arr[minidx]=arr[i];
            arr[i]=temp;
        }
    }
    return ;
}
int printArray(int arr[],int n){
    for(int i=0; i<=n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}