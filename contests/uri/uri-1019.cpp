/*
* Problema: Conversão de Tempo
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1019
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
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

#define vet_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo)vector< vector< tipo > >
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(void){

    int t, h=0, m=0, s=0;

    cin>>t;

    while(t >= 3600){h++; t-=3600;}
    while(t >= 60){
        m++; t-=60;
        if(m==60){m=0; h++;}
    }
    s = t;

    cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
