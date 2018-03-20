/*
* Problema: Divisão da Nlogônia
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1091
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

#define vet_i(tipo, lin, col, inic) vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;


int main(){

    int k, x, y, n, m;

    cin>>k;
    while(k!=0){
        cin>>n>>m;
        fore(i, 0, k){
            cin>>x>>y;
            if(x==n || y==m) cout<<"divisa"<<endl;
            else if(x>n && y>m) cout<<"NE"<<endl;
            else if(x<n && y>m) cout<<"NO"<<endl;
            else if(x<n && y<m) cout<<"SO"<<endl;
            else if(x>n && y<m) cout<<"SE"<<endl;
        }

        cin>>k;
    }

    return 0;
}
