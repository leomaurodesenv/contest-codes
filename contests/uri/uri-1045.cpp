/*
* Problema: Tipos de Triângulos
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1045
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

    double a, b, c;
    double m, l1, l2;

    cin>>a>>b>>c;

    if(a >= b+c){
        m = a; l1 = b; l2 = c;
    }
    else if(b >= a+c){
        m = b; l1 = a; l2 = c;
    }
    else{
        m = c; l1 = b; l2 = a;
    }

    if(m >= l1+l2) cout<<"NAO FORMA TRIANGULO"<<endl;
    else if(m*m == l1*l1+l2*l2) cout<<"TRIANGULO RETANGULO"<<endl;
    else if(m*m > l1*l1+l2*l2) cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if(m*m < l1*l1+l2*l2) cout<<"TRIANGULO ACUTANGULO"<<endl;

    if(m == l1 && m == l2) cout<<"TRIANGULO EQUILATERO"<<endl;
    else if(m == l1 || m == l2 || l1 == l2) cout<<"TRIANGULO ISOSCELES"<<endl;

    return 0;
}
