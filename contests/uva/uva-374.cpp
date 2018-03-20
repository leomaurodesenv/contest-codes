/*
* Problema: 374 - Big Mod
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=310
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

lli exp_mod(lli b, lli p, lli m){
    lli r, aux;
    if(p == 1) r = b % m;
    else{
        if(p%2==0){
            aux = exp_mod(b, (p/2), m);
            r = (aux * aux) % m;
        }
        else{
            aux = exp_mod(b, (p-1), m);
            r = ((b % m) * aux) % m;
        }
    }
    return r;
}

lli mod(lli a, lli b, lli c){
    if(b==0) return 1;
    if(b%2==0){
        lli x = mod(a, b/2, c);
        return (x*x)%c;
    }
    else return (a%c * mod(a,b-1,c))%c;
}

int main(void){

    lli r, b, p, m;

    /*
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    */

    while(cin>>b>>p>>m){
        r = mod(b, p, m);
        cout<<r<<endl;
    }

    return 0;
}
