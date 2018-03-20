/*
* Problema: 10038 - Jolly Jumpers
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979
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

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

int main(){

	string tmp;
	int n;

    while(cin>>n){
        vector<int> v (n, 0);
        bool jolly = true;

        fore(i, 0, n) cin>>v[i];

        if(n != 0){
            vector<int> dif (n - 1, 0);
            fore(i, 1, n) dif[i-1] = abs(v[i] - v[i-1]);
            sort(dif.begin(), dif.end());

            fore(i, 1, n - 1){
                jolly = (dif[i] == (dif[i-1] + 1));
                if(!jolly) break;
            }
        }

        if(jolly) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
    return 0;
}
