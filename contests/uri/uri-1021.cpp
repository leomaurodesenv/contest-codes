/*
* Problema: Notas e Moedas
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1021
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

    double p;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
    int m100=0, m050=0, m025=0, m010=0, m005=0, m001=0;

    cin>>p;

    while(p >= 100.0){n100++; p-=100.0;}
    while(p >= 50.0){n50++; p-=50.0;}
    while(p >= 20.0){n20++; p-=20.0;}
    while(p >= 10.0){n10++; p-=10.0;}
    while(p >= 5.0){n5++; p-=5.0;}
    while(p >= 2.0){n2++; p-=2.0;}

    while(p >= 1.0){m100++; p-=1.0;}
    while(p >= 0.50){m050++; p-=0.50;}
    while(p >= 0.25){m025++; p-=0.25;}
    while(p >= 0.10){m010++; p-=0.10;}
    while(p >= 0.05){m005++; p-=0.05;}
    while(p >= 0.01){m001++; p-=0.01;}

    cout<<"NOTAS:"<<endl;
    cout<<n100<<" nota(s) de R$ 100.00"<<endl;
    cout<<n50<<" nota(s) de R$ 50.00"<<endl;
    cout<<n20<<" nota(s) de R$ 20.00"<<endl;
    cout<<n10<<" nota(s) de R$ 10.00"<<endl;
    cout<<n5<<" nota(s) de R$ 5.00"<<endl;
    cout<<n2<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<m100<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m050<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m025<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m010<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m005<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m001<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}
