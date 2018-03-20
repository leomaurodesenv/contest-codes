/*
* Problema: Adivinha
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1547
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

int main(){

    /*
	freopen("344.inp", "r", stdin);
	freopen("344.out", "w", stdout);
	*/
    int n;
    cin>>n;

    fore(i, 0, n){
        int qt, s, val, prox_pos, prox_val;
        cin>>qt>>s;

        prox_pos = -1; prox_val = INF;
        fore(j, 0, qt){
            cin>>val;
            if(abs(s-prox_val) > abs(s-val)){
                prox_val = val;
                prox_pos = j;
            }
        }
        cout<<(prox_pos+1)<<endl;
    }

    return 0;
}
