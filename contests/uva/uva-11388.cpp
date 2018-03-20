/*
* Problema: 11388 - GCD LCM
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2383
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

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

lli lcm(lli a, lli b){
    lli temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int main(){

    lli t;
    cin>>t;

    while(t--){
        lli g, l;

        cin>>g>>l;
        if(l%g == 0) cout<<g<<" "<<l<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
