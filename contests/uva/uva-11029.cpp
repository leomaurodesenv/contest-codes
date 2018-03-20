/*
* Problema: 11029 - Leading and Trailing
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1970
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

#define vet_i(tipo, lin, col, inic) vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

lli mod(lli a, lli b, lli c){
    if(b==0) return 1;
    if(b%2==0){
        lli x = mod(a, b/2, c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}

int main(void){

    int t; cin>>t;
    while(t--){
        lli n, k;
        cin>>n>>k;
        /**
            n ^ k = r
            log ( n^ k ) = log( r )
            k log n = log r
            as log is 10 base so
            b = 10 ,
            let p = k log n
            b ^ p = r
        **/
        lli trail = mod(n, k, 1000);
       // __(trail);
        double p = k * log10(n);
        double ex = p - floor(p);
        double lead = pow(10,ex)*100.00;
        //__(p,ex,lead);
        printf("%03d...%03d\n",(int)lead,trail);
    }

    return 0;
}
