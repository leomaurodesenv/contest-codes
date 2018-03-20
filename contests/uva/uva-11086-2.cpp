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

#define composite_n 1600000

using namespace std;

bitset <composite_n> bs;

void composite_primes(){
    bs.reset();
    bs[0] = 0;
    bs[1] = 0;

    // Adiciono todas as potencias dos valores com Tem divisor
    for(lli i=2; i*i<=composite_n; i++){
        if(!bs[i]){
            for(lli j = i*i; j<composite_n; j+=i) bs[j] = 1;
        }
    }

    // Romovo todos os multiplos daquele, pois terá mais de 1 divisor
    for(lli i=4; i<composite_n; i++){
        if(bs[i]){
            for(lli j = i*2; j<composite_n; j+=i) bs[j] = 0;
        }
    }
}

int main(){

    //file_in("test");
    //file_out("test");

    int val, n, sum;
    composite_primes();

    while(cin>>n){
        sum = 0;
        fore(i, 0, n){
            cin>>val;
            if(bs[val]) sum++;
            //cout<<"--------------"<<endl;
            //cout<<"val:"<<val<<" bs:"<<bs[val]<<" sum:"<<sum<<endl;
        }
        cout<<sum<<endl;
    }

    return 0;
}
