/*
* Problema: 10219 - Find the ways !
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1160
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

    llu n, k;
    while(cin >> n >> k){
        // log(C(n, k)) = log(n!/(n - k)!k!)
        //              = log(n!) - log((n - k)!k!)
        long double logSum = 0;
        for(llu i = n - k + 1; i <= n; ++i)
            logSum += log10((double)i);
        for(llu i = 1; i <= k; ++i)
            logSum -= log10((double)i);

        cout << (int)logSum + 1 << endl;
    }
return 0;
}
