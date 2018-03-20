/*
* Problema: Média 3
* https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
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

#define vet_i(tipo, lin, col, inic) vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

int main(){

    double a, b, c, d, e, m;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    m = (a * 2 + b * 3 + c * 4 + d) / 10;
    printf("Media: %.1f\n", m);
    if (m >= 7.0) printf("Aluno aprovado.\n");
    else if (m >= 5.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1f\n", e);
        if (e + m / 2.0 > 5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (e + m) / 2.0);
    }
    else printf("Aluno reprovado.\n");

    return 0;

}
