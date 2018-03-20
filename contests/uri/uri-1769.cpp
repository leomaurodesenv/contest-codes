/*
* Problema: CPF 1
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1769
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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

#define matrix_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define matrix_d(tipo)vector< vector< tipo > >
#define fore(var, inicio, final) for(int var=inicio;var<final;var++)
#define forec(var, inicio, final, cond) for(int var=inicio;var<final;cond)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

typedef unsigned long long int llu;
typedef long long int lli;

int main(void){

    char s[15], cpf[12];
    char lixo, part1[4], part2[4], part3[4], part4[4];
    int b1, b2, c;

    while(gets(s)){
        c = 0;
        fore(i, 0, strlen(s)){
            if(s[i] != '.' && s[i] != '-'){
                cpf[c] = s[i]; c++;
            }
            cpf[c] = '\0';
        }
        b1 = 0; b2 = 0;
        /*cout<<"CPF: "<<cpf<<endl;*/
        fore(i, 0, strlen(cpf)-2){
            b1 += (cpf[i] - '0') * (i+1);
            b2 += (cpf[i] - '0') * (9 - i);
            /*cout<<"b1["<<i<<"]: "<<(cpf[i] - '0') * (i+1)<<" ("<<(cpf[i] - '0')<<" * "<<(i+1)<<")"<<endl;*/
        }
        b1 = b1%11; b1 = (b1 > 9) ? 0 : b1;
        b2 = b2%11; b2 = (b2 > 9) ? 0 : b2;
        if(b1 == (cpf[9] - '0') && b2 == (cpf[10] - '0')) cout<<"CPF valido"<<endl;
        else cout<<"CPF invalido"<<endl;
        /*cout<<"b1:"<<b1<<" b2:"<<b2<<endl;*/

    }

    return 0;
}
