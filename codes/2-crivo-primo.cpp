/** -------------------------------------------------------------------------- **/
/** Funções Primo **/
// Retorna os primos até a raiz de N
// is_prime com crivo
// PEga os primos no intervalo
/** -------------------------------------------------------------------------- **/

vi primes;

void crivo_primes(){
    bitset<N> bs;

    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(llu i=2; i<N; i++){
        if(bs[i]){
            for(llu j = i*i; j<N; j+=i)
                bs[j] = 0;
            primes.push_back(i);
        }
    }
}

bool is_prime(llu num){
    for(llu i = 0; i < primes.size() && primes[i]*primes[i] <= num; i++){
        if(num%primes[i] == 0) return false;
    }
    return true;
}

vi get_primes(llu a, llu b){
    vi r;

    if(a < 2) a = 2;
    if(b < 2) b = 2;
    for(llu i=a; i<=b; i++){
        if(is_prime(i)){
            r.push_back(i);
            /*cout<<i<<" ";*/
        }
    }

    return r;
}