void selectionSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return;
}
int printArray(char arr[],int n){
    for(int i=0; i<=n-1; i++){
        char ch=(char)i;
        printf("%c ",i+96);
    }
}