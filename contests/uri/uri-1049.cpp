/*
* Problema: Animal
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1049
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

	string t1, t2, t3, r;
	cin>>t1>>t2>>t3;

    if(t1=="vertebrado"){
        if(t2=="ave"){
            if(t3=="carnivoro") r="aguia";
            else/*onivoro*/ r="pomba";
        }
        else{/*mamifero*/
            if(t3=="onivoro") r="homem";
            else/*herbivoro*/ r="vaca";
        }
    }
    else{/*invertebrado*/
        if(t2=="inseto"){
            if(t3=="hematofago") r="pulga";
            else/*herbivoro*/ r="lagarta";
        }
        else{/*anelideo*/
            if(t3=="hematofago") r="sanguessuga";
            else/*onivoro*/ r="minhoca";
        }
    }

    cout<<r<<endl;

    return 0;
}
