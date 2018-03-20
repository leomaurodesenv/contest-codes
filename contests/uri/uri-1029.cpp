/*
* Fibonacci, Quantas Chamadas?
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1029
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

    int size_fib = 40, n, val;
    llu num_calls, result;
    vet_i(fib, llu, size_fib, 2, 0);

    fib[0][0] = 0; fib[0][1] = 0;
    fib[1][0] = 1; fib[1][1] = 0;
    fib[2][0] = 1; fib[2][1] = 2;

    fore(i, 3, size_fib){
        result = fib[i-1][0] + fib[i-2][0];
        num_calls = fib[i-1][1] + fib[i-2][1] + 2;
        fib[i][0] = result; fib[i][1] = num_calls;
        /*cout<<"fib("<<i<<") = "<<fib[i][1]<<" calls = "<<fib[i][0]<<endl;*/
    }

    cin>>n;
    fore(i, 0, n){
        cin>>val;
        cout<<"fib("<<val<<") = "<<fib[val][1]<<" calls = "<<fib[val][0]<<endl;
    }

    return 0;
}
