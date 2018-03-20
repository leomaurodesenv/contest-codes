/*
* Problema: E
* ** URL **
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

int max(int a, int b) { return (a > b)? a : b; }

int knapSack(int W, vector <int> &wt, vector <int> &val, int n, int &din){
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

    fore(i, 0, W){
        if(K[n][i] == K[n][W]){din = W - i; break;}
    }
    return K[n][W];
}

typedef struct{
    int votos, preco;
} item;

int main(){

    int n, t, l, r;

    //file_in("test");

    cin>>n;
    while(n--){
        cin>>t>>l;

        vector <int> wt;
        vector <int> val;
        fore(i, 0, l){
            item inttem;
            cin>>inttem.preco;
            cin>>inttem.votos;
            wt.push_back(inttem.preco);
            val.push_back(inttem.votos);
        }

        int din = 0;
        r = knapSack(t, wt, val, l, din);
        if(r != 0) cout<<r<<" "<<din<<endl;
        else cout<<"NO FUNDS"<<endl;
        /*
        vector <item> itens;
        fore(i, 0, l){
            item inttem;
            cin>>inttem.preco;
            cin>>inttem.votos;
            itens.push_back(inttem);
        }
        */

    }

    return 0;
}
