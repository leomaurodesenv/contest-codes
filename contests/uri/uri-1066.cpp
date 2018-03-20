/*
* Problema: Pares, Ímpares, Positivos e Negativos
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1066
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

    int p = 0, ip = 0, ps = 0, ng = 0;
    int init;

    fore(i, 0, 5){
        cin>>init;

        if(init%2==0) p++;
        else ip++;
        if(init>0) ps++;
        if(init<0) ng++;
    }

    cout<<p<<" valor(es) par(es)"<<endl;
    cout<<ip<<" valor(es) impar(es)"<<endl;
    cout<<ps<<" valor(es) positivo(s)"<<endl;
    cout<<ng<<" valor(es) negativo(s)"<<endl;

    return 0;
}
