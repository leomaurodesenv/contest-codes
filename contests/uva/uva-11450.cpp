/*
* Problema: 11450 - Wedding shopping
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2445
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

void print_v(vector< vector< int > > &vet){
    cout<<"-- print --"<<endl;
    fore(i, 0, vet.size()){
        cout<<(i)<<": ";
        fore(j, 0, vet[i].size())
            cout<<vet[i][j]<<" ";
        cout<<endl;
    }
}

int main(){

    int n, m, c, k, v;

    //file_in("test");

    cin>>n;
    while(n--){
        /* Leitura dos valores */
        cin>>m>>c;
        vet_d(int) ck;
        fore(a, 0, c){
            cin>>k;
            vector<int> ks;
            fore(j, 0, k){
                cin>>v;
                ks.push_back(v);
            }
            ck.push_back(ks);
        }
        /* Primeira verificação */
        vet_i(mat, int, (m+1), c, 0);
        if(c){
            fore(j, 0, ck[0].size()){
                k = m - ck[0][j];
                if(k >= 0) mat[k][0] = 1;
            }
        }
        /* Preenchendo a tabela */
        v = 1;
        fore(a, 0, c-1){
            fore(j, 0, m){
                if(mat[j][v-1]){
                    fore(i, 0, ck[v].size()){
                        k = j - ck[v][i];
                        if(k >= 0) mat[k][v] = 1;
                    }
                }
            }
            v++;
        }
        //print_v(mat);
        v = -1;
        fore(i, 0, m){
            if(mat[i][c-1]){
                v = i; break;
            }
        }
        if(v == -1) cout<<"no solution"<<endl;
        else cout<<(m-v)<<endl;
    }

    return 0;
}
