/*
* Problema: 10223 - How many nodes ?
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1164
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

#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

lli catalan[30];

int catalan_solve(){
    catalan[0]=1;
    fore(i, 0, 25){
        catalan[i+1] = (catalan[i] * (4*i + 2))/(i + 2);
    }
}

int main(){

    catalan_solve();
    /*fore(i, 0, 25){
        cout<<"catalan: "<<catalan[i]<<endl;
    }*/

    lli n;
    while(cin>>n){
        for(int i = 1; i<25; i++){
            if(n==catalan[i]){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}

/*
I have solved this by Catalan Expression's Recurrence Relation
C(n) = (2*(2n+1)/(n+2)) * C(n-1);
Where C0 = 1
*/
