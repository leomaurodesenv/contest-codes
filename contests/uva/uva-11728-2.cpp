/*
* Problema: 11728 - Alternate Task
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2828
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

#define sizec 1001

int SumOfDivisors(int x){
    if(x == 1) return 1;
    int i, ans = 1, sq=sqrt(x);
    for(i = 2; i <= sq; i++){
        if(x % i == 0){
            if(i*i == x) ans+=i;
            else ans+=i+x/i;
        }
    }
    return ans+x;
}

int main(){

    int n, val, add;
    vector <int> num (sizec, -1);

    fore(i, 1, sizec){
        val = SumOfDivisors(i);
        if(val < sizec) num[val] = i;
    }

    add = 1;
    while(cin>>n && n!=0){
        cout<<"Case "<<add<<": "<<num[n]<<endl;
        add++;
    }

    return 0;
}
