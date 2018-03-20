/*
* Problema: Linha na Matriz
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1181
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

int main(){
    int l;
    char t;
    double N[12][12];
    double soma = 0.0;

    cin >> l;
    cin >> t;

    fore(i, 0, 12){
        fore(j, 0, 12){
            cin >> N[i][j];
            if(i == l){
                soma += N[i][j];
                }
        }
    }

    if(t == 'S') printf("%.1f\n", soma);
    else printf("%.1f\n", soma/12.0);

    return 0;
}
