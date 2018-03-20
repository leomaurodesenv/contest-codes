/*
* Problema: Aumento de Salário
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1048
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

	double sal, ajus;
	int por;

	cin>>sal;

	if(sal>2000.0){
        ajus = (sal*0.04);
        por = 4;
	}
	else if(sal>1200.0){
        ajus = (sal*0.07);
        por = 7;
	}
	else if(sal>800.0){
        ajus = (sal*0.10);
        por = 10;
	}
	else if(sal>400.0){
        ajus = (sal*0.12);
        por = 12;
	}
	else{
        ajus = (sal*0.15);
        por = 15;
	}
    sal += ajus;

    printf("Novo salario: %.2lf\n", sal);
    printf("Reajuste ganho: %.2lf\n", ajus);
    printf("Em percentual: %d", por);
    cout<<" %"<<endl;

    return 0;
}
