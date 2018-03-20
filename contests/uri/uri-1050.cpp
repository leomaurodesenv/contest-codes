/*
* Problema: DDD
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1050
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

    string r;
    int ddd;

    cin>>ddd;

    if(ddd==61) r = "Brasilia";
    else if(ddd==71) r = "Salvador";
    else if(ddd==11) r = "Sao Paulo";
    else if(ddd==21) r = "Rio de Janeiro";
    else if(ddd==32) r = "Juiz de Fora";
    else if(ddd==19) r = "Campinas";
    else if(ddd==27) r = "Vitoria";
    else if(ddd==31) r = "Belo Horizonte";
    else r = "DDD nao cadastrado";

    cout<<r<<endl;

    return 0;
}
