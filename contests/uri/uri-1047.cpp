/*
* Problema: Tempo de Jogo com Minutos
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1047
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

    int h1, m1, h2, m2;
    int hf, mf;

    cin>>h1>>m1>>h2>>m2;

    if(h2<h1) h2 += 24;
    if(m2 < m1){
        h2--; m2 += 60;
    }

    hf = h2 - h1;
    mf = m2 - m1;

    if(hf == 0 && mf == 0) hf = 24;

    cout<<"O JOGO DUROU "<<hf<<" HORA(S) E "<<mf<<" MINUTO(S)"<<endl;

    return 0;
}
