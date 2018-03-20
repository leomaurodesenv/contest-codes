/*
* Problema: Divisibilidade Por 3
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1987
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <string>
#include <cstring>
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

    int n;

    while(cin>>n){
        char num[n+1];
        cin>>num;

        lli sum = 0;
        fore(i, 0, n){
            sum += (num[i] - '0');
        }
        if(sum%3 == 0) cout<<sum<<" sim"<<endl;
        else cout<<sum<<" nao"<<endl;
    }

    return 0;
}
