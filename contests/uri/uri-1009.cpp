/*
* Problema: Salário com Bônus
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
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

    string nome;
    double sal, extra;

    cin>>nome;
    cin>>sal>>extra;

    sal += extra*0.15;

    printf("TOTAL = R$ %.2lf\n", sal);

    return 0;
}
