/*
* Problema: Preenchimento de Vetor IV
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1179
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

void print_v(vector<int> &v, bool even){
    fore(i, 0, v.size()){
        if(even) printf("par[%d] = %d\n", i, v[i]);
        else printf("impar[%d] = %d\n", i, v[i]);
    }
}

int main(){

    int c = 15, v;
    vector<int> odd, even;

    fore(i, 0, c){
        cin>>v;
        if(v%2 == 0) even.push_back(v);
        else odd.push_back(v);

        if(even.size() == 5){
            print_v(even, true);
            even.clear();
        }
        else if(odd.size() == 5){
            print_v(odd, false);
            odd.clear();
        }
    }
    print_v(odd, false);
    print_v(even, true);

    return 0;
}
