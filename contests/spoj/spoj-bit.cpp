/*
* Problema: BIT - Bits Trocados
* http://br.spoj.com/problems/BIT/
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

int troco_2d(vector <int> &l, int v){
    /* Declarando variaveis */
    int n = l.size(), m1, m2;
    int mat[v+1][n+1];

    /* Setando impossivel */
    for(int i=0; i<v+1; i++)
        for(int j=0; j<n+1; j++) mat[i][j] = -1;

    /* Preenchendo o vetor */
    for(int i=1; i<v+1; i++){
        for(int j=1; j<n+1; j++){
            mat[i][j] = mat[i][j-1];
            if(i-l[j-1] >= 0){
                m1 = (mat[i-l[j-1]][j] != -1) ? mat[i-l[j-1]][j] + 1 : 1;
            }
            else m1 = mat[i][j];

            if(mat[i][j] == -1) mat[i][j] = m1;
            else mat[i][j] = min(mat[i][j], m1);
        }
    }

    /*
    // Imprime o vetor
    for(int i=0; i<v+1; i++){
        for(int j=0; j<n+1; j++){
            cout<<"("<<i<<", "<<j<<"):"<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // Lista dos itens utilizados
    bool item;
    int a = v, b = n;
    vector <int> m(n, 0);
    while(a >=0 && b >=1 && mat[a][b] != -1){
        item = false;
        for(int j=0; j<n; j++){
            if(a-l[j] >= 0 && ((mat[a-l[j]][b] + 1) == mat[a][b] || mat[a-l[j]][b] == -1)){
                m[j]++; a -= l[j]; item = true;
            }
        }
        if(!item){b--;}
    }

    //cout<<"moedas:";
    for(int i=n-1; i>0; i--) cout<<m[i]<<" ";
    cout<<m[0]<<endl;

    return mat[v][n];
}

int main(){

    int v, c = 1;
    vector <int> l;
    l.push_back(1);
    l.push_back(5);
    l.push_back(10);
    l.push_back(50);

    while(cin>>v && v != 0){
        cout<<"Teste "<<c<<endl;
        troco_2d(l, v); c++;
        cout<<endl;
    }

    return 0;
}
