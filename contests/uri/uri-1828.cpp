/*
* Problema: Bazinga!
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1828
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

    string s, r, rout;
    int t, c = 1;

    cin>>t;
    while(t--){
        cin>>s>>r;
        if(s == r) rout = "De novo!";
        else{
            if((s == "pedra" && r == "lagarto") ||
               (s == "tesoura" && r == "papel") ||
               (s == "papel" && r == "pedra") ||
               (s == "lagarto" && r == "Spock") ||
               (s == "Spock" && r == "tesoura") ||
               (s == "tesoura" && r == "lagarto") ||
               (s == "lagarto" && r == "papel") ||
               (s == "papel" && r == "Spock") ||
               (s == "Spock" && r == "pedra") ||
               (s == "pedra" && r == "tesoura")
               ) rout = "Bazinga!";
            else rout = "Raj trapaceou!";
        }

        cout<<"Caso #"<<c<<": "<<rout<<endl;
        c++;
    }

    return 0;
}
