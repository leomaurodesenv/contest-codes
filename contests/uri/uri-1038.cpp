/*
* Problema: Lanche
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1038
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

    int a;
    double i[5], qtde, p;

    i[0] = 4.0;
    i[1] = 4.5;
    i[2] = 5.0;
    i[3] = 2.0;
    i[4] = 1.5;

    cin>>a>>qtde;
    a--;
    p = i[a]*qtde;

    printf("Total: R$ %.2lf\n", p);

    return 0;
}
