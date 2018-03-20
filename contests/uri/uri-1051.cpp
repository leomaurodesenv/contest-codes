/*
* Problema: Imposto de Renda
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1051
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

    double s, c=0.0, aux;

    cin>>s;

    s-=2000.0;
    if(s<=0.0) cout<<"Isento"<<endl;
    else{
        if(s>=2500.0){
            c += (s-2500.0)*0.28;
            s-=(s-2500.0);
        }
        if(s>1000.0){
            c += (s-1000.0)*0.18;
            s-=(s-1000.0);
        }
        if(s>0.0) c += s*0.08;

        printf("R$ %.2lf\n", c);
    }



    return 0;
}
