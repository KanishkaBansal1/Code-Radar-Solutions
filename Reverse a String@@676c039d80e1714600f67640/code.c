#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str);
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i=0,j=size-1; i<=j; i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return 0;
}