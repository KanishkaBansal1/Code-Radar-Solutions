#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && x==z){
        printf("Equilateral");
    }
    else if(x==y && x!=z) || (y==z && x!=z) || (x==z && x!=y){
        printf("Isosceles");
    } 
    else{
        printf("Scalene");
        }  
    return 0;
    
}
