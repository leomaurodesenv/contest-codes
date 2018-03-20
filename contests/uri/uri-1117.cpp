/*
* Problema: Validação de Nota
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1117
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

    double n1, n2, val, r;
    bool first = true;

    while(true){
        cin>>val;
        if(val < 0.0 || val > 10.0) cout<<"nota invalida"<<endl;
        else if(first){
            n1 = val;
            first = false;
        }
        else{
            n2 = val;
            break;
        }
    }
    r = (n1+n2)/2.0;
    printf("media = %.2lf\n", r);

    return 0;
}
