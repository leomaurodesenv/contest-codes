/*
* Problema: 10922 - 2 the 9s
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1863
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

lli get_sum(string num){
    lli r = 0;
    fore(i, 0, num.length()){
        r += num[i] - '0';
    }
    return r;
}

string get_str(lli num){
    stringstream ss;
    ss << num;
    string r = ss.str();
    return r;
}

int main(){

	string num, numd, numf;
	lli numi, degree;

	while(cin>>num && num!="0"){
        degree = 0;
        numf = num;
        numi = get_sum(num);
        if(numi%9==0){
            numd="";
            if(numi==9) degree=1;
            else while(true){
                numd = num;
                num = get_str(numi);
                numi = get_sum(num);
                if(num != numd) degree++;
                else break;
            }
            cout<<numf<<" is a multiple of 9 and has 9-degree "<<degree<<"."<<endl;
        }
        else cout<<num<<" is not a multiple of 9."<<endl;

	}

    return 0;
}
