/*
* Problema: 11728 - Alternate Task
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2828
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
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

#define sizec 2001

bitset <sizec> bs;
vector <int> primes;

void crivo(){
    bs.set();
    bs[0] = bs[1] = 0;
    fore(i, 2, sizec){
        if(bs[i]){
            for(int j=i*i; j<sizec; j+=i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

int main(){

    crivo();

    int n, val, add;
    vector <int> num (sizec, 0);

    num[1] = 1;
    fore(i, 2, sizec){
        if(bs[i]) num[i] = i+1;
        else{
            fore(j, 0, primes.size()){
                if(i%primes[j] == 0){ add = primes[j]; val = i/primes[j]; break; }
            }
            num[i] = add + num[val];
        }
    }

    /*fore(i, 1, sizec){
        cout<<"["<<i<<"]:"<<num[i]<<" "<<endl;
    }*/

    while(cin>>n && n!=0){
        val = add = -1;
        fore(i, 1, sizec){
            if(num[i] == n){
                val = i;
                add++;
                //cout<<"i: "<<i<<" add:"<<add<<endl;
                break;
            }
        }
        cout<<val<<endl;
    }

    return 0;
}
