/*
* Problema: 10130 - SuperSale
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1071
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

int knapSack(int W, vector <int> &wt, vector <int> &val, int n){
    int i, w;
    int K[n+1][W+1];

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++){
        for (w = 0; w <= W; w++){
            if(i==0 || w==0)
                K[i][w] = 0;
            else if(wt[i-1] <= w)
                K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            else
                K[i][w] = K[i-1][w];
        }
    }

    return K[n][W];
}

int main(){

    int t, n, g;
    lli pmax;

    cin>>t;
    while(t--){
        cin>>n;
        vector <int> wt(n, 0);
        vector <int> val(n, 0);
        fore(i, 0, n){
            cin>>val[i]>>wt[i];
        }

        cin>>g;
        int gw[g];
        pmax = 0;
        fore(i, 0, g){
            cin>>gw[i];
            pmax += knapSack(gw[i], wt, val, n);
        }

        cout<<pmax<<endl;
    }

    return 0;
}
