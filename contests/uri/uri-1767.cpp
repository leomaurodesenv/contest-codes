/*
* Problema: Saco do Papai Noel
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1767
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

int knapSack(int W, vector <int> &wt, vector <int> &val, int n, int &wm, int &pc){
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

    int resp = K[n][W], c = 0;

    // Retorna peso utilizado
    for(int i=0; i<(W+1); i++){
        if(resp == K[n][i]){wm = i; break;}
    }

    // Retorna qtde de itens na mochila
    int nc = n, Wc = W;
    while(nc>=1){
        if(nc >= 0 && Wc - wt[nc-1] >= 0)
        if((K[nc][Wc] - val[nc-1]) == K[nc-1][Wc - wt[nc-1]]){
            c++; Wc -= wt[nc-1];
        }
        nc--;
    }
    pc = c;

    return resp;
}

int main(){

    //file_in("test");

    int n, pac;

    cin>>n;
    while(n--){
        cin>>pac;
        vector <int> wt (pac, 0), val (pac, 0);
        fore(i, 0, pac){
            cin>>val[i]>>wt[i];
        }
        int wm, r, pc;
        r = knapSack(50, wt, val, pac, wm, pc);

        cout<<r<<" brinquedos"<<endl
            <<"Peso: "<<wm<<" kg"<<endl
            <<"sobra(m) "<<(pac-pc)<<" pacote(s)"<<endl
            <<endl;
    }

    return 0;
}
