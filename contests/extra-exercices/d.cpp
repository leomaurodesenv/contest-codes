/*
* Problema: D
* ** URL **
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

    int n;
    char c;
    string linha;

    while(getline(cin, linha)){
        fore(i, 0, linha.length()){
            c = linha[i];
            //if(c <= 31 || c == 127) continue;
            if(c >= 65 && c <= 90){
                if(c == 'Y') c = 'A';
                else if(c == 'Z') c = 'B';
                else c = (c + 2);
            }
            else if(c >= 97 && c <= 122){
                if(c == 'a') c = 'y';
                else if(c == 'b') c = 'z';
                else c = (c - 2);
            }
            else if(c >= 48 && c <= 57){
                if(c == '9') c = '0';
                else c = (c + 1);
            }
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}
