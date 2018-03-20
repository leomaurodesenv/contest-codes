/*
* Problema: Mapa do Meistre
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1855
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


int main(){

    //file_in("teste");

    bool valid = false;
    char ler;
    int lag, alt;

    cin>>lag>>alt;
    char mapa[alt][lag];
    fore(i, 0, alt){
        fore(j, 0, lag){
            cin>>mapa[i][j];
            if(mapa[i][j] == '*') valid = true;
        }
    }

    int acao = 0;
    int i, j;
    i = j = 0;

    while(i >= 0 && i < alt && j >= 0 && j < lag && mapa[i][j] != '*' && mapa[i][j] != 'x' && valid){
        char op = mapa[i][j];
        mapa[i][j] = 'x';
        if(op == '>'){ j++; acao = 1; }
        else if(op == '<'){ j--; acao = 2; }
        else if(op == 'v'){ i++; acao = 3; }
        else if(op == '^'){ i--; acao = 4; }
        else{
            if(acao == 0) break;
            else if(acao == 1) j++;
            else if(acao == 2) j--;
            else if(acao == 3) i++;
            else if(acao == 4) i--;
        }
    }

    if(i >= 0 && i < alt && j >= 0 && j < lag && mapa[i][j] == '*') cout<<"*"<<endl;
    else cout<<"!"<<endl;

    return 0;
}
