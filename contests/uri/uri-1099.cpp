/*
* Problema: Soma de Ímpares Consecutivos II
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1099
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

#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(){

    int n, m, z;
    int a, b, soma;

    cin>>z;
    fore(j, 0, z){
        cin>>n>>m;

        if(n>m){
            a = m; b = n;
        }
        else{
            b = m; a = n;
        }

        soma = 0;
        fore(i, (a+1), b){
            if(i%2!=0)
                soma += i;
        }
        cout<<soma<<endl;
    }

    return 0;
}
