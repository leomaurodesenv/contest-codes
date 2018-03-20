/*
* Problema: Cálculo Simples
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1010
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

    int nome;
    double sal, extra, tot = 0;

    cin>>nome;
    cin>>extra>>sal;
    tot += sal*extra;

    cin>>nome;
    cin>>extra>>sal;
    tot += sal*extra;

    printf("VALOR A PAGAR: R$ %.2lf\n", tot);

    return 0;
}
