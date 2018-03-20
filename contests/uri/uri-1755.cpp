/*
* Problema: O Troco
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1755
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

int main(){

    //file_in("entrada");

    int t, n;

    cin>>t;
    while(t--){
        float init;
        lli d, qtde, ind, val, resta;

        cin>>d>>n;
        d *= 100;
        resta = 0;
        fore(i, 0, n){
            val = d;
            qtde = 0;
            cin>>init;
            ind = round(init * 100);

            //cout<<"ind:"<<ind<<" init:"<<init<<endl;
            if(ind > d) continue;
            qtde = val/ind;
            val = d - (qtde * ind);

            /*cout<<"qtde:"<<qtde<<endl
                <<"resta:"<<resta<<" val:"<<val<<endl;*/

            if(qtde > 0 && resta < val) resta = val;
        }
        int pri = (resta/100);
        int dot = (resta%100);

        //printf("resta: %d\n", resta%100);
        printf("%d.%02d\n", pri, dot);
    }

    return 0;
}
