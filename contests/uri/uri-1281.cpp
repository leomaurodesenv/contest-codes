/*
* Problema: Ida � Feira
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1281
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

	int n, m, p, qtde;
	string nome;
	double preco, total;

	cin>>n;

	while(n--){
        cin>>m;
        map <string, double> feira;
        while(m--){
            cin>>nome>>preco;
            feira[nome] = preco;
            //cout<<"nome:"<<nome<<" - "<<feira[nome]<<endl;
        }

        cin>>p;
        total = 0.0;
        while(p--){
            cin>>nome>>qtde;
            total += feira[nome] * (double) qtde;
        }
        printf("R$ %.2lf\n", total);
	}

    return 0;
}
