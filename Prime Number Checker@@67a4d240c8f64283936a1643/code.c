int isPrime(int j){
    if(j<2) return 0;
    for(int i=0; i*i<=j; i++){
        if(j%i==0) return 0;
    }
    return 1;
}