/*
* Problema: Experiências
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1094
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

	int n, val, total=0, rato=0, sapo=0, coelho=0;
	char tipo;
	double quant;

	cin>>n;
	fore(i, 0, n){
        cin>>val>>tipo;
        if(tipo == 'R') rato+=val;
        else if(tipo == 'S') sapo+=val;
        else if(tipo == 'C') coelho+=val;
        total+=val;
	}

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<coelho<<endl;
    cout<<"Total de ratos: "<<rato<<endl;
    cout<<"Total de sapos: "<<sapo<<endl;
    printf("Percentual de coelhos: %.2lf ", (((double)coelho)/((double)total))*100.0); cout<<"%"<<endl;
    printf("Percentual de ratos: %.2lf ", (((double)rato)/((double)total))*100.0); cout<<"%"<<endl;
    printf("Percentual de sapos: %.2lf ", (((double)sapo)/((double)total))*100.0); cout<<"%"<<endl;

    return 0;
}
