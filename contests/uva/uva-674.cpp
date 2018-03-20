/*
* Problema: 674 - Coin Change
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=615
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

int combinac[7500][5];

int combi(vector<int> &moedas, int a, int b){

    if(a == 0) return 1;
    if(a < 0) return 0;
    if(b > 4) return 0;

    if(combinac[a][b] != -1) return combinac[a][b];

    combinac[a][b] = combi(moedas, a - moedas[b], b)
                   + combi(moedas, a - moedas[b+1], b+1)
                   + combi(moedas, a - moedas[b+2], b+2)
                   + combi(moedas, a, b+3);
    return combinac[a][b];
}

int main(){
    memset(combinac, -1, sizeof(combinac));

    vector<int> moedas;
    moedas.push_back(50);
    moedas.push_back(25);
    moedas.push_back(10);
    moedas.push_back(5);
    moedas.push_back(1);

    int v;

    while(cin>>v)
        cout<<combi(moedas, v, 0)<<endl;

    return 0;
}
