/*
* Problema: Tudo o que Você Precisa é Amor
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1307
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

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

int bin2dec(string sbin){
    int dec = 0, pluser = 1, bini;
    sbin = string(sbin.rbegin(), sbin.rend());
    fore(i, 0, sbin.size()){
        //cout<<"sbin[i]:"<<sbin[i]<<" dec:"<<dec<<endl;
        bini = sbin[i] - 48;
        dec += bini * pluser;
        pluser *= 2;
    }
    return dec;
}

int main(){

    //file_in("test");

    int n;
    cin>>n;

    fore(c, 1, n+1){
        string s1, s2;
        int si1, si2, mdc;
        cin>>s1;
        cin>>s2;

        si1 = bin2dec(s1);
        si2 = bin2dec(s2);

        mdc = gcd(si1, si2);

        if(mdc != 1 && mdc != 0) cout<<"Pair #"<<c<<": All you need is love!"<<endl;
        else cout<<"Pair #"<<c<<": Love is not all you need!"<<endl;
    }

    return 0;
}
