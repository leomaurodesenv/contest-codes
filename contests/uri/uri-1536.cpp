/*
* Problema: Libertadores
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1536
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

    int n, m, v;
    int ag, bg, sag, sbg, cag, cbg, aux;
    char x;

    cin>>n;
    fore(i, 0, n){
        ag = bg = 0;

        cin>>m>>x>>v;
        ag += m;
        bg += v;
        cbg = v;
        cin>>m>>x>>v;
        ag += v;
        bg += m;
        cag = v;

        if(ag > bg) cout<<"Time 1"<<endl;
        else if(ag < bg) cout<<"Time 2"<<endl;
        else{
            sag = ag - bg;
            sbg = bg - ag;
            if(sag > sbg) cout<<"Time 1"<<endl;
            else if(sag < sbg) cout<<"Time 2"<<endl;
            else{
                if(cag > cbg) cout<<"Time 1"<<endl;
                else if(cag < cbg) cout<<"Time 2"<<endl;
                else cout<<"Penaltis"<<endl;
            }
        }
    }


    return 0;
}
