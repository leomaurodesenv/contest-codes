/*
* Problema: Jogando Cartas Fora
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1110
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

    int n, aux;

    while(cin>>n && n != 0){
        queue<int> baralho;
        fore(i, 1, (n+1)) baralho.push(i);
        cout<<"Discarded cards: ";
        while(baralho.size() != 1){
            if(baralho.size() == n) cout<<baralho.front();
            else cout<<", "<<baralho.front();
            baralho.pop(); // Remove
            aux = baralho.front(); // Captura primeiro
            baralho.push(aux); // Adiciona no fim da fila
            baralho.pop(); // Remove
        }
        cout<<endl<<"Remaining card: "<<baralho.front()<<endl;

    }

    return 0;
}
