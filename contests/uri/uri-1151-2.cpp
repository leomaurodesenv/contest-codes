/*
* Problema: Easy Fibonacci
* https://www.urionlinejudge.com.br/judge/en/problems/view/1151
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

    int t, ind;
	lli fib[61];
	fib[0] = 0;
	fib[1] = 1;

	fore(i, 2, 61){
	    fib[i] = fib[i-1] + fib[i-2];
	}

	cin>>t;
	fore(i, 0, t){
	    if(i != t-1) cout<<fib[i]<<" ";
	    else cout<<fib[i]<<endl;
	}

    return 0;
}
