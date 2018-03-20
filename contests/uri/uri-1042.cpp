/*
* Problema: Sort Simples
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1042
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

int main(void){

    int a, b, c;
    int p1, p2, p3;

    cin>>a>>b>>c;
    if(a <= b && a <= c){
        p1 = a;
        if(b <= c){p2=b; p3=c;}
        else{p3=b; p2=c;}
    }
    else if(b <= a && b <= c){
        p1 = b;
        if(a <= c){p2=a; p3=c;}
        else{p3=a; p2=c;}
    }
    else{
        p1 = c;
        if(a <= b){p2=a; p3=b;}
        else{p3=a; p2=b;}
    }

    cout<<p1<<endl<<p2<<endl<<p3<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
