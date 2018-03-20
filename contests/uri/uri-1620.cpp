/*
* Problema: Triangulação de Delaunay
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1620
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

#include <iomanip>
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

    double i, l, x;

    while(true){
        cin>>l;
        if(l == 0.0) break;
        i = (l == 3.0) ? 3.0 : 3.0 + ((l - 3.0) * 2.0);
        x = (i - l) / l;
        printf("%.6f\n", x);
    }

    return 0;
}
