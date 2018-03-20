/*
* Problema: Grenais
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1131
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

#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(){

    int denovo, i, g;
    int pi=0, pg=0, emp=0, c=0;

    while(true){
        cin>>i>>g;
        if(i==g) emp++;
        else if(i<g) pg++;
        else pi++;
        c++;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>denovo;
        if(denovo==2) break;
    }

    cout<<c<<" grenais"<<endl;
    cout<<"Inter:"<<pi<<endl;
    cout<<"Gremio:"<<pg<<endl;
    cout<<"Empates:"<<emp<<endl;
    if(pi==pg) cout<<"Nao houve vencedor"<<endl;
    else if(pi<pg) cout<<"Gremio venceu mais"<<endl;
    else cout<<"Inter venceu mais"<<endl;

    return 0;
}
