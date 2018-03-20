/*
* Problema: F
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

typedef struct{
    int alt, area, bas;
} ret;

int main(){

    int n, r;

    while(cin>>n){

        vector <int> vetin (n, 0);
        int maior = 0;

        fore(i, 0, n){
            cin>>vetin[i];
            if(vetin[i] > maior) maior = vetin[i];
        }

        vet_i(vet, int, n, n, 0);

        int alt, bas, area, resp = 0;
        vector <ret> rets (n);
        fore(i, 0, n){
            rets[i].alt = 0; rets[i].area = 0; rets[i].bas = i;
            fore(j, i, n){
                ret t;
                if(rets[i].alt == 0){
                    t.alt = vetin[j];
                    t.bas = j;
                    t.area = t.alt;
                }
                else{
                    if(rets[i].alt < vetin[j]) t.alt = rets[i].alt;
                    else t.alt = vetin[j];
                    t.bas = i;
                    t.area = t.alt * (i-j);
                }

                if(t.area > rets[i].area) rets[i] = t;
            }
            if(resp < rets[i].area) resp = rets[i].area;
        }

        cout<<resp<<endl;
        /*
        vector < bitset <100001> > vet(n);

        fore(i, 0, n){
            fore(j, 0, vetin[i]) vet[i][j] = 1;
        }

        fore(i, 0, n){
            fore(j, 0, maior+1) cout<<vet[i][j]<<" ";
            cout<<endl;
        }
        */



    }

    return 0;
}
