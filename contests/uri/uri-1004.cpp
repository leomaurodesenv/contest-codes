/*
* Problema: Produto Simples
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1004
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>
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

int main(){

    int a, b, r;
    cin>>a>>b;
    r = a*b;
    cout<<"PROD = "<<r<<endl;

    return 0;
}
