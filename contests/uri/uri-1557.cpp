/*
* Problema: Matriz Quadrada III
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1827
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
#define vet_d(var, tipo, lin, col) vector< vector< tipo > > var (lin, vector< tipo > (col))
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int set_t(int n){
    int t = (n%10 == 0) ? 1 : 0;
    while(n>0){
        n /= 10;
        t++;
    }
    return t;
}

int main(){

    int mat, v, d, t;
    while(cin>>mat && mat != 0){
        if(mat > 1) t = set_t(pow(2, (mat-1)*2));
        else t = 1;

        fore(i, 0, mat){
            if(i != 0) d = pow(2, i);
            else d = 1;

            fore(j, 0, mat){
                if(j == 0) v = d;
                else v = d * pow(2, j);

                if(j == (mat-1)) cout<<setw(t)<<v<<endl;
                else cout<<setw(t)<<v<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
