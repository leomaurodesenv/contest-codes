/*
* Problema: Biblioteca Pascal
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1267
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

int main(){

    int n, d, a;

    cin>>n>>d;
    while(n!=0 && d!=0){
        int alunos[n];
        fore(j, 0 , n) alunos[j] = 0;

        fore(i, 0 , d){
            fore(j, 0 , n){
                cin>>a;
                alunos[j] += a;
            }
        }

        bool yes_v=false;
        fore(j, 0 , n){
            if(alunos[j] == d){
                yes_v=true;
                break;
            }
        }

        if(yes_v) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

        cin>>n>>d;
    }

    return 0;
}
