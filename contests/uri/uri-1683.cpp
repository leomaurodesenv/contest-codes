/*
* Problema: Maior Retângulo em um Histograma
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1683
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

/*
lli busca_altura(vector<lli> &v, lli alt, lli xi, lli xf, lli xmax){
    if(xi < 0 || xf > xmax) return 0;
    if(alt == 0) return busca_altura(v, 1, xi, xf, xmax);

    lli area, xi1, xf1;
    xi1 = xf1 = -1;
    area = ((xf+1) - xi) * (alt-1);
    for(lli i=xi; i<=xf; i++){
        if(xi1 == -1 && v[i] >= alt){xi1 = i; continue;}
        else if(xf1 == -1 && v[i] < alt){xf1 = (i-1); break;}
    }
    // Caso o último seja da altura
    if(xf1 == -1 && v[xf] >= alt) xf1 = xf;

    // Encontrou uma base daquele tamanho
    if(xi1 != -1 && xf1 == -1) area = v[xi1];
    else if(xi1 == -1 && xf1 != -1) area = v[xf1];
    else if(xi1 != -1 && xf1 != -1){
        lli area1, area2;
        area = ((xf1+1) - xi1) * alt;
        // Tenta aumentar a base atual
        area1 = busca_altura(v, (alt+1), xi1, xf1, xmax);
        // Mantem a busca por uma base de mesma altura
        area2 = busca_altura(v, alt, (xf1+1), xf, xmax);
        area = max(area, area1);
        area = max(area, area2);
    }

    //cout<<"xi1:"<<xi1<<" xf1:"<<xf1<<endl
    //    <<"alt:"<<alt<<" area:"<<area<<endl;

    return area;
}*/

typedef struct{
    lli i, alt;
} ret;

int main(){


	lli n, v;
	while(cin>>n && n!=0){
        stack <ret> rets;
        lli retmax = 0;
        for(lli i=0; i<n; i++){
            cin>>v;
            if(rets.size() == 0 || rets.top().alt < v){
                ret newret; newret.alt = v; newret.i = i;
                rets.push(newret);
            }
            else{
                lli last = i;
                while(rets.size() != 0 && v <= rets.top().alt){
                    retmax = max(retmax, rets.top().alt * (i-rets.top().i));
                    last = min(last, rets.top().i);
                    rets.pop();
                }
                ret newret; newret.alt = v; newret.i = last;
                rets.push(newret);
            }

        }

        while(rets.size() > 0){
            retmax = max(retmax, rets.top().alt * (n-rets.top().i));
            rets.pop();
        }
        cout<<retmax<<endl;
	}


    return 0;
}
