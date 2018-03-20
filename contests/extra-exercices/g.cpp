/*
* Problema: G
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

    int n, v, d1, d2, d3, aux;

    while(cin>>n && n != 0){
        vector <int> vag (n, 0);

        while(cin>>v && v != 0){
            vag[0] = v;
            fore(i, 1, n) cin>>vag[i];

            stack <int> seq;
            int cur = 0;

            fore(i, 1, n+1){
                seq.push(i);
                while (seq.size() > 0 && vag[cur] == seq.top()){
                    cur++; seq.pop();
                }
            }

            if(seq.size() == 0) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        cout<<endl;
    }

    return 0;
}
