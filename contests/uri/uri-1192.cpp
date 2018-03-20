/*
* Problema: O jogo Matemático de Paula
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1192
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

typedef struct up_down{
    int ind;
    int to;
} escada;

int main(){

    int n, a, b, resp;
    char l;

    cin>>n;
    fore(i, 0, n){
        cin>>a>>l>>b;
        /*cout<<"a:"<<a<<" l:"<<l<<" b:"<<b<<endl;*/
        if(a==b) resp = a*b;
        else if('A' <= l && l <= 'Z') resp = b-a;
        else resp = a+b;

        cout<<resp<<endl;
    }

    return 0;
}
