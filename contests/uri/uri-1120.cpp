/*
* Problema: Revisão de Contrato
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1120
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


int main(){

    string e, sin, sout;
    char er;
    while(cin>>e>>sin && (e != "0" || sin != "0")){
        er = e[0];

        // Retira o digito
        sout = "";
        fore(i, 0, sin.size()){
            if(sin[i] != er) sout += sin[i];
        }

        // Limpa
        sin = sout;
        int c = 0;
        while(c < sin.size() && sin[c] == '0'){
            sout.erase(0, 1);
            c++;
        }
        if(sout.size() == 0) sout = "0";

        cout<<sout<<endl;
    }

    return 0;
}
