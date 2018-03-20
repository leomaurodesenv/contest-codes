/*
* Problema: Matriz Quadrada I
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1435
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

    int mat, v;
    while(cin>>mat && mat != 0){
        fore(i, 0, mat){
            fore(j, 0, mat){
                if(i == 0 || i == (mat-1) || j == 0 || j == (mat-1)) v = 1;
                else if(i <= j && j <= (mat-i-1)) v = i+1;
                else if((mat-i-1) <= j && j <= i) v = mat-i;
                else if(j <= i && i <= (mat-j-1)) v = j+1;
                else if((mat-j-1) <= i && i <= j) v = mat-j;

                if(j == (mat-1)) printf("%3d\n", v);
                else printf("%3d ", v);
            }
        }
        printf("\n");
    }

    return 0;
}
