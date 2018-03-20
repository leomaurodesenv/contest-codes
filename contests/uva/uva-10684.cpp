/*
* Problema: 10684 - The jackpot
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1625
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

#define file_in(file) freopen(file+".in", "r", stdin)
#define file_out(file) freopen(file+".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(){

    int n;

    while(cin>>n && n!=0){
        vector <int> v (n, 0);
        fore(i, 0, n) cin>>v[i];

        int r, sum;
        r = sum = 0;
        fore(i, 0, n){
            sum += v[i];
            r = max(r, sum);
            if(sum < 0) sum = 0;
        }

        if(r > 0) cout<<"The maximum winning streak is "<<r<<"."<<endl;
        else cout<<"Losing streak."<<endl;
    }

    return 0;
}
