/*
* Problema: 11344 - The Huge One
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2319
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <numeric>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <locale>
#include <bitset>
#include <set>
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

#define maxN 1005
int len, n;
char s[maxN];

bool Check(int n) {
    int du = 0;
    for (int i=0; i<len; i++) {
        du = du*10 + s[i]-48;
        du %= n;
    }
    return (du==0);
}

int main(){
//    freopen("344.inp", "r", stdin); freopen("344.out", "w", stdout);
    int Case, a;
    scanf("%d", &Case);
    while (Case--) {
        scanf("%s", &s); len =  strlen(s);
        bool wdf = true;
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            scanf("%d", &a);
            if (wdf) wdf = Check(a);
        }
        printf("%s - ", s);
        if (wdf) puts("Wonderful.");
        else puts("Simple.");
    }
    return 0;
}
