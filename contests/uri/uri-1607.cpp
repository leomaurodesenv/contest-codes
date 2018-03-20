/*
* Problema: Avance as Letras
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1607
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

    string s1, s2;
    int n;

    cin>>n;
    while(n--){
        cin>>s1>>s2;
        int c = 0, sum, c1, c2;

        fore(i, 0, s1.size()){
            sum = 0;
            c2 = s2[i];
            c1 = s1[i];

            while(c2 != c1){
                sum++;
                if(c1 == 'z') c1 = 'a';
                else c1++;
            }
            c += sum;
        }
        cout<<c<<endl;
    }

    return 0;
}
