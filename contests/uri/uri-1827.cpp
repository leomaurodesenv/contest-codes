/*
* Problema: Matriz Quadrada VI
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

int main(){

    int mat, v, d, t;
    while(cin>>mat){
        fore(i, 0, mat){
            fore(j, 0, mat){
                if((mat)/2 == i && i == j) v = 4;
                else if((mat/3 <= i && i <= 2*(mat/3)+1) && (mat/3 <= j && j <= 2*(mat/3)+1)) v = 1;
                //else if((mat%2 == 0) && (mat/3 <= i && i <= 2*(mat/3)) && (mat/3 <= j && j <= 2*(mat/3))) v = 1;
                else if(i == j) v = 2;
                else if(i == (mat-j-1)) v = 3;
                else v = 0;


                if(j == (mat-1)) cout<<v<<endl;
                else cout<<v;
            }
        }
        cout<<endl;
    }

    return 0;
}
