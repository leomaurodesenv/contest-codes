/*
* Problema: 11955 - Binomial Theorem
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3106
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

#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;

lli fat(lli num){
    lli r = 1;
    fore(i, 2, num+1){
        r *= i;
    }
    return r;
}

lli comp(lli n, lli p){
    if(n < p || p == n || p == 0) return 1;
    else if(p == 1) return n;

    lli top = 1, bottom;
    fore(i, p+1, n+1) top *= i;
    bottom = fat(n-p);

    return (top/bottom);
}

int main(){

    int t, cases = 0;
    int i, j;
    long long p[55][55] = {};
    p[0][0] = 1;
    for(i = 1; i <= 50; i++) {
        p[i][0] = 1;
        for(j = 1; j <= i; j++)
            p[i][j] = p[i-1][j]+p[i-1][j-1];
    }
    char s[128], word[2][55];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        int n = 0, k, idx;
        for(i = 1; s[i]; i++) {
            idx = 0;
            while(s[i] != '+' && s[i] != ')')
                word[n][idx++] = s[i++];
            word[n++][idx] = '\0';
            if(s[i] == ')') break;
        }
        sscanf(s+i+2,"%d", &k);
        printf("Case %d: ", ++cases);
        for(i = 0; i <= k; i++) {
            if(i)   putchar('+');
            if(p[k][i] != 1)
                printf("%lld*", p[k][i]);
            if(i != k) {
                printf("%s", word[0]);
                if(k-i != 1)
                    printf("^%d", k-i);
                if(i)   printf("*");
            }
            if(i) {
                printf("%s", word[1]);
                if(i != 1)
                    printf("^%d", i);
            }
        }
        puts("");
    }

    return 0;
}
