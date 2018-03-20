/*
* Problema: Área do Círculo
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
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

    double raio, r;
    cin>>raio;
    r = pow(raio, 2.0) * 3.14159;
    printf("A=%.4f\n", r);

    return 0;
}
