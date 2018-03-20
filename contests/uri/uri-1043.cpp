/*
* Problema: Triângulo
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1043
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

    double a, b, c, val;
    bool is_tri = true;

    cin>>a>>b>>c;

    if(a>b && a>c && a>=b+c) is_tri = false;
    else if(b>a && b>c && b>=a+c) is_tri = false;
    else if(c >= a+b) is_tri = false;

    if(is_tri){
        val = a+b+c;
        printf("Perimetro = %.1lf\n", val);
    }
    else{
        val = ((a+b)*c)/2.0;
        printf("Area = %.1lf\n", val);
    }

    return 0;
}
