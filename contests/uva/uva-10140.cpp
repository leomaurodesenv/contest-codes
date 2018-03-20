/*
* Problema: Prime Distance
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1081
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
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

#define vet_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo)vector< vector< tipo > >
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

#define N 50000

using namespace std;

typedef unsigned long long int llu;
typedef long long int lli;
typedef vector <unsigned int> vi;

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

int main(void){

    crivo_primes();

    llu l, u;
    while(cin>>l>>u){
        vi pm;
        llu difmaujor, amaujor, bmaujor;
        llu difless, aless, bless;

        pm = get_primes(l, u);
        if(pm.size() < 2){
            cout<<"There are no adjacent primes."<<endl;
        }
        else{
            amaujor = aless = pm[0];
            bmaujor = bless = pm[1];
            difmaujor = difless = bmaujor - amaujor;
            for(llu i=2; i<pm.size(); i++){
                if(pm[i]-pm[i-1] < difless){
                    aless = pm[i-1];
                    bless = pm[i];
                    difless = bless - aless;
                }
                else if(pm[i]-pm[i-1] > difmaujor){
                    amaujor = pm[i-1];
                    bmaujor = pm[i];
                    difmaujor = bmaujor - amaujor;
                }
            }
            cout<<aless<<","<<bless<<" are closest, ";
            cout<<amaujor<<","<<bmaujor<<" are most distant."<<endl;
        }
    }

    return 0;
}
