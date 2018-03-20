/*
* Problema: Aliteração
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1263
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

    string line;

    while(getline(cin, line)){
        int cnt = 0;
        char last = '0', ctmp;
        bool lasting;
        string tmp;
        stringstream ss(line);

        lasting = false;
        while(ss>>tmp){
            ctmp = (65 <= tmp[0] && tmp[0] <= 90) ? tmp[0] : tmp[0] - 32;
            //printf("%c %d\n", ctmp, ctmp);

            if(last == '0') last = ctmp;
            else{
                if(!lasting && last == ctmp){
                    cnt++;
                    lasting = true;
                }
                else if(last != ctmp){
                    last = ctmp;
                    lasting = false;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
