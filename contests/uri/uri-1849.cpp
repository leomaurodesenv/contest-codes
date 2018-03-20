/*
* Problema: Dracarys!
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1849
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

    int ld, cd, lv, cv, resp = 0;
    int a, l, c;

    cin>>ld>>cd>>lv>>cv;

    // Esq Sem Giro
    l = ld + lv;
    c = (cd < cv) ? cd : cv;
    if(l == c) a = l*c;
    else if(l < c) a = l*l;
    else a = c*c;
    if(a > resp) resp = a;

    // Cima Sem Giro
    l = (ld < lv) ? ld : lv;
    c = cd + cv;
    if(l == c) a = l*c;
    else if(l < c) a = l*l;
    else a = c*c;
    if(a > resp) resp = a;

    // Cima Com Giro
    l = (ld < cv) ? ld : cv;
    c = cd + lv;
    if(l == c) a = l*c;
    else if(l < c) a = l*l;
    else a = c*c;
    if(a > resp) resp = a;

    // Esq Com Giro
    l = ld + cv;
    c = (cd < lv) ? cd : lv;
    if(l == c) a = l*c;
    else if(l < c) a = l*l;
    else a = c*c;
    if(a > resp) resp = a;

    cout<<resp<<endl;


    return 0;
}
