/*
* Problema: Sequência de Gödelito
* https://www.urionlinejudge.com.br/judge/pt/problems/view/2041
*/

#include <cstdio>
#include <cstdlib>

#include <iostream>
#include <algorithm>

#include <string>
#include <locale>

#include <vector>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(void){

    int c = 41, qtde, n;
    string s, mat[c];
    char a, in_c[100];

    mat[0] = "3";
    for(int i=1; i<c; i++){
        string n;
        s = mat[i-1];
        for(int j=0; j<s.length(); j++){
            if(j == 0){ a = s[0]; qtde = 1; }
            else if(a == s[j]) qtde++;
            else{
                sprintf(in_c, "%d", qtde);
                string val(in_c);
                n += val + a;
                a = s[j]; qtde = 1;
            }
        }
        sprintf(in_c, "%d", qtde);
        string val(in_c);
        n += val + a;
        mat[i] = n;
    }

    while(cin>>n){
        cout<<mat[n-1]<<endl;
    }


    return 0;
}
