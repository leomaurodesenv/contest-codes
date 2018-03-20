/*
* Problema: 507 - Jill Rides Again
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=448
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

typedef struct{
    int i, f;
} ind;

int soma_max_1d(vector <int> &v, int &xi, int &xf){
    int n = v.size();
    int r, sum, inicio, iniciocmp;

    if(n <= 0) return 0;

    r = sum = 0;
    xi = xf = inicio = 0;
    bool cmp = true;

    fore(i, 0, n){
        sum += v[i];

        if(sum < 0){
            inicio = i + 1;
            sum = 0;
        }
        if(sum > r || (sum == r && (xf-xi < i-inicio))){
            r = sum;
            xi = inicio;
            xf = i;
        }
        // -- Normal
        // r = max(r, sum);
        // if(sum < 0) sum = 0;

        // -- Validando as posições
    }

    return r;
}

int main(){

    //file_in("test");
    //file_out("test");

    int b, r, xi, xf, sm;

    cin>>b;
    fore(a, 1, b+1){
        cin>>r;
        vector <int> vet(r-1, 0);
        fore(i, 0, r-1){
            cin>>vet[i];
        }

        sm = soma_max_1d(vet, xi, xf);
        if(sm <= 0) cout<<"Route "<<a<<" has no nice parts"<<endl;
        else{
            xi++; xf+=2;
            cout<<"The nicest part of route "<<a<<" is between stops "<<xi<<" and "<<xf<<endl;
        }
    }


    return 0;
}
