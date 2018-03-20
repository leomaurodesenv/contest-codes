/*
* Problema: Matriz de Quadrados
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1578
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

int len_val (lli value){
  	int l = 1;
  	while(value > 9){
        l++;
        value /= 10;
    }

    return l;
}

int main(){

    int n, m, siz, siz_max, len, col_c = 4;
    lli a, val;
    char x;

    cin>>n;
    fore(i, 0, n){
        cin>>m;
        lli mat[m][m];
        int col[m];

        fore(j, 0, m){
            fore(k, 0, m){
                cin>>a;
                mat[j][k] = a*a;
            }
        }

        fore(k, 0, m){
            siz_max = 0;
            fore(j, 0, m){
                siz = len_val(mat[j][k]);
				if(siz_max < siz) siz_max = siz;
			}
			col[k] = siz_max;
        }

        cout<<"Quadrado da matriz #"<<col_c<<":"<<endl;
        fore(j, 0, m){
            fore(k, 0, m){
                cout<<setw(col[k]);
                cout<<mat[j][k];
                if((k+1) != m) cout<<" ";
			}
			cout<<endl;
        }

        col_c++;
    }


    return 0;
}
