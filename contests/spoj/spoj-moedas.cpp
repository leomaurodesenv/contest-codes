/*
* Problema: MOEDAS - Moedas
* http://br.spoj.com/problems/MOEDAS/
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

    int pval[50002];
    int val, nmoedas;
    int vmoedas[102];

    while(cin>>val && val != 0){
        cin>>nmoedas;

        for(int i = 0; i <= val; i++) pval[i] = 0;

        for(int i = 0; i < nmoedas; i++){
			cin >> vmoedas[i];
			pval[vmoedas[i]] = 1;
		}

		for (int i = 1; i <= val; i++){
			if (pval[i])
				for (int a = 0; a < nmoedas; a++){
                    if (i + vmoedas[a] > val) break;
					if (pval[i + vmoedas[a]] == 0) pval[i + vmoedas[a]] = pval[i] + 1;
					else pval[i + vmoedas[a]] = min(pval[i + vmoedas[a]], pval[i] + 1);
                }
		}

		if(pval[val]) cout<<pval[val]<<endl;
		else cout<<"Impossivel"<<endl;
    }

    return 0;
}
