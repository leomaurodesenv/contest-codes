/*
* Problema: Roberto e a Sala Desenfreada
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1953
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

int main(void){

    int n, mat, intrusos;
    int epr, ehd;
    string curso;

    while(cin>>n){
        epr = 0; ehd = 0;
        intrusos = 0;
        for(int i=0; i<n; i++){
            cin>>mat>>curso;
            if(curso == "EPR") epr++;
            else if(curso == "EHD") ehd++;
            else intrusos++;
        }
        cout<<"EPR: "<<epr<<endl;
        cout<<"EHD: "<<ehd<<endl;
        cout<<"INTRUSOS: "<<intrusos<<endl;
    }

    return 0;
}
