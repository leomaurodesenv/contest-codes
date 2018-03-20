/*
* Problema: Fórmula de Bhaskara
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1036
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

    double a, b, c;
    double x1, x2, delta;

    cin>>a>>b>>c;
    delta = (b*b) - (4.0*a*c);
    if(a == 0.0 || delta < 0.0) cout<<"Impossivel calcular"<<endl;
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }

    return 0;
}
