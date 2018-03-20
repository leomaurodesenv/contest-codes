/*
* Problema: Tempo de um Evento
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1061
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

    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    char txt[4], txt2[4], txt3[4];

    scanf("%s %d", &txt[0], &d1);
    scanf("%d %s %d %s %d", &h1, &txt2[0], &m1, &txt3[0], &s1);

    scanf("%s %d", &txt[0], &d2);
    scanf("%d %s %d %s %d", &h2, &txt2[0], &m2, &txt3[0], &s2);

	int df, hf, mf, sf;
	df = d2 - d1;
	if(h2 < h1){
        df--;
        hf = (h2 + 24) - h1;
	}
	else hf = h2 - h1;
	if(m2 < m1){
        hf--;
        mf = (m2 + 60) - m1;
	}
	else mf = m2 - m1;
	if(s2 < s1){
        mf--;
        sf = (s2 + 60) - s1;
	}
	else sf = s2 - s1;

	cout<<df<<" dia(s)"<<endl;
    cout<<hf<<" hora(s)"<<endl;
    cout<<mf<<" minuto(s)"<<endl;
    cout<<sf<<" segundo(s)"<<endl;

    return 0;
}
