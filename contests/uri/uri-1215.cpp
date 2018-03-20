/*
* Problema: Primeiro Dicionário de Andy
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1215
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <numeric>
#include <set>
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

    string sin;
    set <string> dic;

    while(getline(cin, sin)){
        string word;

        fore(i, 0, sin.size()){
            if(isalpha(sin[i])) word += sin[i];
            else if(word.size() != 0){
                transform(word.begin(), word.end(), word.begin(), ::tolower);
                dic.insert(word);
                word.clear();
            }
        }
        if(word.size() != 0){
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            dic.insert(word);
            word.clear();
        }
    }

    set<string>::iterator it;
    for (it=dic.begin(); it!=dic.end(); ++it)
        cout<<*it<<endl;

    return 0;
}
