/*
* Problema: Distância Entre Dois Pontos
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1015
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
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

#define vet_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo)vector< vector< tipo > >
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(void){

    double r, x1, x2, y1, y2;

    cin>>x1>>y1;
    cin>>x2>>y2;

    r = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    printf("%.4lf\n", r);

    return 0;
}
