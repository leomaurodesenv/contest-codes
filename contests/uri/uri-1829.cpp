/*
* Problema: Jogo do Maior Número
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1829
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

#include <algorithm>
#include <cmath>

using namespace std;

long double factorial(long double a) {
    long double fat = 0;
    for(int i=1; i<=(int)a; i++) fat += log10((long double)i);
    return fat;
}

long double exponential(long double a, long double b){
    return log10(a)*b;
}

int main(void){

    string resp;
    long double a, b, val1, val2;
    char code, num[5];
    vector <string> resps;
    int lc = 0, pc = 0;
    int n;

    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a; cin>>code; cin>>b;
        val1 = exponential(a, b);
        cin>>a; cin>>code;
        val2 = factorial(a);

        if(val1 > val2){
            resp = "Lucas";
            lc++;
        }
        else{
            resp = "Pedro";
            pc++;
        }
        sprintf(num, "%d", i);
        string nums(num);
        resp = "Rodada #"+nums+": "+resp+" foi o vencedor";
        resps.push_back(resp);
    }

    if(lc > pc) cout<<"Campeao: Lucas!"<<endl;
    else if(lc < pc) cout<<"Campeao: Pedro!"<<endl;
    else cout<<"A competicao terminou empatada!"<<endl;

    for(int i=0; i<resps.size(); i++) cout<<resps[i]<<endl;

    return 0;
}
