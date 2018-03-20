/*
* Problema: 164 - String Computer
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=100
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

typedef struct {
    int val;
    char op;
    /* s - substituição, i - inserção, d - deleção, v - vazio */
} lev_data;

int levenshtein_bottomup(string &x, string &y){
    int custo, mat_min;
    char op;

    /* Matriz de operacoes */
    int x_len = x.size()+1, y_len = y.size()+1;
    vector< vector< lev_data > > mat (x_len, vector< lev_data > (y_len));

    fore(i, 0, x_len){ mat[i][0].val = i; mat[i][0].op = 'v'; }
    fore(j, 0, y_len){ mat[0][j].val = j; mat[0][j].op = 'v'; }

    fore(i, 1, x_len){
        fore(j, 1, y_len){
            /* Determina custo */
            if(x[i-1] == y[j-1]) custo = 0;
            else custo = 1;
            /* Função minimo */
            mat_min = mat[i-1][j].val + 1; op = 'd';
            if(mat_min > mat[i][j-1].val + 1){
                mat_min = mat[i][j-1].val + 1; op = 'i';
            }
            if(mat_min > mat[i-1][j-1].val + custo){
                mat_min = mat[i-1][j-1].val + custo; op = 's';
            }

            /* Preenche matriz */
            mat[i][j].val = mat_min; mat[i][j].op = op;
        }
    }

    cout<<"            ";
    fore(i, 0, x_len-1) cout<<x[i]<<"     ";
    cout<<endl;
    fore(j, 0, y_len){
        if(j > 0) cout<<y[j-1]<<" ";
        else cout<<"  ";
        fore(i, 0, x_len){
            cout<<"["<<mat[i][j].op<<"] "<<mat[i][j].val<<" ";
        }
        cout<<endl;
    }


    int a = x.size(), b = y.size();
    vector<string> comandos;
    while(a>0 && b>0){
        if(x[a-1] == y[b-1]){
            a--; b--;
            continue;
        }
        if(mat[a][b].op == 'd'){
            cout<<"D"<<x[a-1]<<" %02d "<<endl;
            a--;
        }
        else if(mat[a][b].op == 'i'){
            cout<<"I"<<y[b-1]<<" %02d ";
            b--;
        }
        else{
            cout<<"C"<<y[b]<<" %02d ";
            a--; b--;
        }
    }

    return mat[x.size()][y.size()].val;
}

int main(void){

    string s1 = "cama", s2 = "caixa";

    //cin>>s1;
    //while(s1!="#"){
      //  cin>>s2;

        cout<<"bottomup: "<<levenshtein_bottomup(s1, s2)<<endl;

        //cin>>s1;
    //}

    return 0;
}
