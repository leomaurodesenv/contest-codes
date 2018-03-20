/*
* Problema: Divisors
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=230
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

#define N 40000

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

vi get_primes(llu b){
    vi r;

    llu a = 2;
    if(b < 2) b = 2;
    for(llu i=a; i<=b; i++){
        if(primes[i]){
            r.push_back(i);
            cout<<i<<" ";
        }
    }

    return r;
}

int divisors(vi pm, llu i){
    int cont = 1; /* 1 */
    llu pmi = 0;
    llu pf = pm[pmi];
    while(i != 1 && (pf*pf <= i)){
        int aux = 0;
        while(i%pf == 0){i/=pf; aux++;}
        cont *= (aux+1);
        pf = pm[++pmi];
    }
    if(i != 1) cont *= 2;
    return cont;
}

int main(void){

    crivo_primes();
    //vi pm = get_primes(32000);
    llu l, u;
    llu nc;
    cin>>nc;

    for(lli a=0; a<nc; a++){
        cin>>l>>u;
        llu maujor, num;
        int cont;

        num = l;
        maujor = divisors(primes, num);
        /*cout<<"num:"<<num<<" div:"<<maujor<<endl;*/
        for(llu i=(l+1); i<u; i++){
            cont = divisors(primes, i);
            /*cout<<"num:"<<i<<" div:"<<cont<<endl;*/
            if(cont > maujor){
                maujor = cont;
                num = i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<num<<" has a maximum of "<<maujor<<" divisors."<<endl;
    }

    return 0;
}
