/*
* Caçando Digletts
* https://www.urionlinejudge.com.br/judge/pt/problems/view/2063
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

int gcd(int a, int b){
    for (;;){
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

int lcm(int a, int b){
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int main(void){

    int n;
    cin>>n;

    int role[n];
    int volt[n];

    fore(i, 0, n){
        cin>>role[i];
    }

    int this_role, cont_role, j;
    fore(i, 0, n){
        this_role = i + 1;
        cont_role = 1; j = i;
        while(this_role != role[j]){
            j = role[j] - 1; cont_role++;
        }
        volt[i] = cont_role;
    }

    int result = accumulate(volt, volt+n, 1, lcm);
    cout<<result<<endl;

    return 0;
}
