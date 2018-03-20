/*
* Problema: Intervalo
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1037
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

    int a, b;
    char dot;

    cin>>a>>dot>>b;

    if(a < 0 || a > 100 || (a == 100 && b != 0)) cout<<"Fora de intervalo"<<endl;
    else if(a < 25 || (a == 25 & b == 0)) cout<<"Intervalo [0,25]"<<endl;
    else if(a < 50 || (a == 50 & b == 0)) cout<<"Intervalo [25,50]"<<endl;
    else if(a < 75 || (a == 75 & b == 0)) cout<<"Intervalo [50,75]"<<endl;
    else if(a < 100 || (a == 100 & b == 0)) cout<<"Intervalo [75,100]"<<endl;

    return 0;
}
