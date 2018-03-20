/*
* Problema: 11086 - Composite Prime
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2027
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <cstring>
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

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

#define primes_n 3000
#define composite_n 1500000

using namespace std;

bitset <primes_n> bs;
vector <int> primes;
int composite[composite_n];

void crivo_primes(){
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(llu i=2; i<primes_n; i++){
        if(bs[i]){
            for(llu j = i*i; j<primes_n; j+=i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

int main(){

    //file_in("test");
    //file_out("test");

    int val, n, sum;
    crivo_primes();
    memset(composite, 0, composite_n);

    fore(i, 2, composite_n){
        if(bs[i]){composite[i] = 1;}
        else{
            fore(j, 0, primes.size()){
                if(i%primes[j] == 0){val = i / primes[j]; break;}
            }
            composite[i] = composite[val] + 1;
        }
    }

    while(cin>>n){
        sum = 0;
        fore(i, 0, n){
            cin>>val;
            cout<<"--------------"<<endl;
            cout<<"val:"<<val<<" composite:"<<composite[val]<<" sum:"<<sum<<endl;
            if(composite[val] == 2) sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
