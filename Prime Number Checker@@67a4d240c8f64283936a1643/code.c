int isPrime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=1; i*i<=num; i++){
        if(n%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}