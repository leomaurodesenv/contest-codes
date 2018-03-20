/*
* Problema: Cédulas
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1018
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

    int c, cf, c100=0, c50=0, c20=0, c10=0, c5=0, c2=0, c1=0;

    cin>>c;
    cf = c;

    while(c >= 100){c100++; c-=100;}
    while(c >= 50){c50++; c-=50;}
    while(c >= 20){c20++; c-=20;}
    while(c >= 10){c10++; c-=10;}
    while(c >= 5){c5++; c-=5;}
    while(c >= 2){c2++; c-=2;}
    while(c >= 1){c1++; c-=1;}

    cout<<cf<<endl;
    cout<<c100<<" nota(s) de R$ 100,00"<<endl;
    cout<<c50<<" nota(s) de R$ 50,00"<<endl;
    cout<<c20<<" nota(s) de R$ 20,00"<<endl;
    cout<<c10<<" nota(s) de R$ 10,00"<<endl;
    cout<<c5<<" nota(s) de R$ 5,00"<<endl;
    cout<<c2<<" nota(s) de R$ 2,00"<<endl;
    cout<<c1<<" nota(s) de R$ 1,00"<<endl;

    return 0;
}
