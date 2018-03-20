/*
* Problema: Sobe e Desce
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1569
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

typedef struct up_down{
    int ind;
    int to;
} escada;

int main(){

    int n, a, b, c;
    int ind, to;
    bool ending = false;
    int max_val = 100;

    cin>>n;
    fore(i, 0, n){
        cin>>a>>b>>c;

        vector <int> jogador(a, 1);

        escada esc[b];
        fore(j, 0, b){
            cin>>ind>>to;
            esc[j].ind = ind;
            esc[j].to = to;
        }

        int c_jog = 0;
        ending = false;
        fore(j, 0, c){
            cin>>ind;
            if(!ending){
            if(c_jog == jogador.size()) c_jog = 0;
                jogador[c_jog] = jogador[c_jog] + ind;
                fore(k, 0, b){
                    if(jogador[c_jog] == esc[k].ind)
                        jogador[c_jog] = esc[k].to;
                }
                if(jogador[c_jog] >= 100){
                    jogador[c_jog] = 100;
                    ending = true;
                }
                /*cout<<"ind:"<<ind<<" c_jog:"<<c_jog<<" jogador"<<jogador[c_jog]<<endl;*/
            }
            c_jog++;
        }

        fore(j, 0, a){
            cout<<"Position of player "<<(j+1)<<" is "<<jogador[j]<<"."<<endl;
        }

    }

    return 0;
}
