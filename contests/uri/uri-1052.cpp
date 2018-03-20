/*
* Problema: Mês
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1052
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

    string r;
    int m;

    cin>>m;

    if(m==1) r="January";
    else if(m==2) r="February";
    else if(m==3) r="March";
    else if(m==4) r="April";
    else if(m==5) r="May";
    else if(m==6) r="June";
    else if(m==7) r="July";
    else if(m==8) r="August";
    else if(m==9) r="September";
    else if(m==10) r="October";
    else if(m==11) r="November";
    else if(m==12) r="December";

    cout<<r<<endl;

    return 0;
}
