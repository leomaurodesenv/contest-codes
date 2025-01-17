/*
* Problema: Getline Two - Frutas
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1217
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

	/*freopen("344.inp", "r", stdin);
	freopen("344.out", "w", stdout);*/

	int n, cf;
	double v, mf, vf;
    string frutas;

    cin>>n;
    mf = 0.0; vf = 0.0;
    int day[n];
    fore(i, 0, n){
        cin>>v; getchar();
        getline(cin, frutas);
        cf = (frutas.length() != 0) ? 1 : 0;
        fore(j, 0, frutas.length()){
            if(frutas[j] == ' ') cf++;
        }

        mf += (double)cf;
        day[i] = cf;
        vf += v;
    }

    fore(i, 0, n){
        cout<<"day "<<(i+1)<<": "<<day[i]<<" kg"<<endl;
    }
    mf = mf/((double)n);
    vf = vf/((double)n);
    printf("%.2lf kg by day\n", mf);
    printf("R$ %.2lf by day\n", vf);

    return 0;
}
