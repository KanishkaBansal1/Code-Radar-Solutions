int isprime(int j){
    if(j<2) return 0;
    for(int i=2; i*i<=j; i++){
        if(j%i==0) return 0;
    }
    return 1;
}