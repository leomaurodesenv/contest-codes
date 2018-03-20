/*
* Problema: Maior Número de Um Algarismo
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1867
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

#define matrix_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define matrix_d(tipo)vector< vector< tipo > >
#define fore(var, inicio, final) for(int var=inicio;var<final;var++)
#define forec(var, inicio, final, cond) for(int var=inicio;var<final;cond)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

typedef unsigned long long int llu;
typedef long long int lli;

string alg1_c(string s){
    int aux, n=0;
    string r;
    stringstream strstrem;

    fore(i, 0, s.length()){
        aux = s[i] - '0';
        n += aux;
    }
    strstrem<<n;
    strstrem>>r;

    return r;
}

int alg1(string s){
    int r=0;
    while(s.length() != 1){
       s = alg1_c(s);
    }
    r = s[0] - '0';
    return r;
}


int main(void){

    string n, m;
    int nn, mm;

    while(true){
        cin>>n>>m;
        if(n == "0" && m=="0") break;

        nn = alg1(n);
        mm = alg1(m);

        if(nn == mm) cout<<"0"<<endl;
        else if(nn > mm)  cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }

    return 0;
}
