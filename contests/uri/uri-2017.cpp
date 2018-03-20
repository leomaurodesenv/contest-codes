/*
* Problema: Seis Strings
* https://www.urionlinejudge.com.br/judge/pt/problems/view/2017
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cctype>
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

int levenshtein_distance(string &x, int len_x, string &y, int len_y){
    int custo, custo_min;

    /* caso base: strings vazias */
    if(len_x == 0) return len_y;
    if(len_y == 0) return len_x;

    /* testa se o ultimo caractere das strings combinam */
    if(x[len_x-1] == y[len_y-1]) custo = 0;
    else custo = 1;

    /* retorna o minimo da deleção do char x, deleção char y, e deleção char dos dois */
    custo_min = min(levenshtein_distance(x, len_x - 1, y, len_y    ) + 1,
                    levenshtein_distance(x, len_x    , y, len_y - 1) + 1);
    custo_min = min(levenshtein_distance(x, len_x - 1, y, len_y - 1) + custo, custo_min);

    return custo_min;
}

int main(void){

    #define file_in(file) freopen(file".in", "r", stdin)
    file_in("test");

    string sin, s1, s2, s3, s4, s5;
    int k, d1, d2, d3, d4, d5, merr = 105;

    cin>>sin>>k;
    cin>>s1>>s2>>s3>>s4>>s5;

    d1 = levenshtein_distance(sin, sin.size(), s1, s1.size());
    d2 = levenshtein_distance(sin, sin.size(), s2, s2.size());
    d3 = levenshtein_distance(sin, sin.size(), s3, s3.size());
    d4 = levenshtein_distance(sin, sin.size(), s4, s4.size());
    d5 = levenshtein_distance(sin, sin.size(), s5, s5.size());

    map<int, int> dic;
    d1 = (d1 > k) ? merr : d1;
    d2 = (d2 > k) ? merr : d2;
    d3 = (d3 > k) ? merr : d3;
    d4 = (d4 > k) ? merr : d4;
    d5 = (d5 > k) ? merr : d5;

    dic.insert(pair<int, int>(d1, 1));
    dic.insert(pair<int, int>(d2, 2));
    dic.insert(pair<int, int>(d3, 3));
    dic.insert(pair<int, int>(d4, 4));
    dic.insert(pair<int, int>(d5, 5));

    map<int, int>::iterator it = dic.begin();
    cout<<it->second<<endl<<it->first<<endl;

    return 0;
}
