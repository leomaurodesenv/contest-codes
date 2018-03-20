/*
* Problema: Crescimento Populacional
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1160
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

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(){

    int t, pa, pb, g1, g2, anos;
    float porca, porcb;
    cin>>t;

    fore(i, 0, t){
        cin>>pa>>pb>>porca>>porcb;
        anos = 0;
        if(porca <= porcb) continue;
        fore(j, 1, 101){
            g1 = (pa * porca) / 100;
            g2 = (pb * porcb) / 100;
            pa += g1;
            pb += g2;
            //cout<<"g1:"<<g1<<" g2:"<<g2<<endl;
            if(pa > pb){anos = j; break;}
        }
        if(anos == 0) cout<<"Mais de 1 seculo."<<endl;
        else cout<<anos<<" anos."<<endl;
    }

    return 0;
}
