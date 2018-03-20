/*
* Problema: 10104 - Euclid Problem
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1045
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

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

lli lcm(lli a, lli b){
    lli temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

void euclid_estendido(lli a, lli b, lli &alpha, lli &beta, lli &mdc){
    lli x[] = {1, 0};
    lli y[] = {0, 1};

    while(a%b != 0){
        lli quo = a/b;
        lli temp = a;
        a = b;
        b = temp%b;

        lli xa = x[0] - (x[1]*quo);
        lli ya = y[0] - (y[1]*quo);

        x[0] = x[1];
        x[1] = xa;
        y[0] = y[1];
        y[1] = ya;
    }

    mdc = b;
    alpha = x[1];
    beta = y[1];
}

int main(){

    lli a, b, d;
    lli x, y;

    while(cin>>a>>b){
        lli temp1, temp2, mdc;
        if(a < b){temp1=b; temp2=a;}
        else{temp2=b; temp1=a;}

        d = gcd(temp1, temp2);
        euclid_estendido(a, b, temp1, temp2, mdc);
        cout<<temp1<<" "<<temp2<<" "<<d<<endl;
    }

    return 0;
}
