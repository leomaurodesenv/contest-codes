/*
* Problema: Crise de Energia
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1031
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

/* i<=n para i<n */
int flavious(int n, int k){
    int r = 0;
    for(int i = 1; i < n; i++){
        r = (r + k) % i;
    }
    return r;
}

int main(void){

    int n, k, r;

    while(true){
        cin>>n;
        if(n == 0) break;
        k = 1;
        do{
            r = flavious(n, k); k++;
        } while(r != 11);
        cout<<k-1<<endl;
    }

    return 0;
}
