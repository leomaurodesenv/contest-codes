/*
* Problema: 11466 - Largest Prime Divisor
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2461
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <string>
#include <sstream>
#include <iomanip>
#include <locale>
#include <bitset>
#include <map>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>

#define INF 0x3F3F3F3F
#define PI 3.14159265358979323846
#define EPS 1e-10

#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(var, tipo) vector< vector< tipo > > var
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

#define sizec 10000011

using namespace std;

bitset<sizec> bs;
vector<lli> primes;

void crivo(){
    bs.set();
    bs[0] = bs[1] = 0;
    for(lli i=2; i<=sizec; i++){
        if(bs[i]){
            for(lli j=i*i; j<=sizec; j+=i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

vector<lli> primesFactor(lli n){
    vector<lli> fac;
    lli pf_index = 0, pf = primes[pf_index];
    while(n != 1 && (pf*pf <= n)){
        if(n%pf==0) fac.push_back(pf);
        while(n%pf==0){n/=pf;}

        if(pf_index+1==primes.size()) break;
        pf = primes[++pf_index];
    }
    if(n != 1) fac.push_back(n);
    return fac;
}

int main(){

    freopen("udebug.in", "r", stdin);
    freopen("udebug.out", "w+", stdout);

    lli num, div;
    crivo();

    while(cin>>num && num != 0){
        if(num < 0) num *= -1;
        vector<lli> fac = primesFactor(num);

        div = -1;
        if(fac.size() > 1){
            fore(i, 0, fac.size()){
                if(div < fac[i]) div = fac[i];
            }
        }
        cout<<div<<endl;
    }

    return 0;
}
