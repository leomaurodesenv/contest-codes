/*
* Problema: 10420 - List of Conquests
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1361
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

    int n;

    cin>>n;
    map<string, int> citys;
    cin.ignore();

    while(n--){
        string linha;
        getline(cin, linha);
        string delimiter = " ";
        string token = linha.substr(0, linha.find(delimiter));

        map<string, int>::iterator it = citys.find(token);
        if(it == citys.end()) citys[token] = 1;
        else citys[token] = (citys[token]+1);

        //cout<<"linha:"<<linha<<endl;
        //cout<<"token:"<<token<<" - "<<citys[token]<<endl;
    }

    for(map<string, int>::iterator it=citys.begin(); it!=citys.end(); ++it)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}

