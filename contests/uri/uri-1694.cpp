#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <utility>
#include <queue>
#include <stack>
#include <sstream>
#include <set>
#include <cmath>
#include <bitset>

using namespace std;

#define INF 0x3F3F3F3F
#define PI 3.14159265358979323846
#define EPS 1e-10
#define lli long long int
#define llu unsigned long long int
#define matrix_i(tipo, lin, col, inic)vector< vector< tipo > > (lin, vector< tipo > (col, inic))
#define matrix_d(tipo)vector< vector< tipo > >
#define fore(var,inicio,final) for(int var=inicio;var<final;var++)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

void inicializar ( bitset <2510> & primo ){
	primo[0] = 0;
	primo[1] = 0;
	fore(i,2,2510){
		if ( primo[i] == 1 ){
			int valor = i+i;
			while ( valor < 2510 ){
				primo[valor] = 0;
				valor += i;
			}
		}
	}
}

lli combinacao ( int a, int b ){
	lli valor = 1,valor2 = 1;
	fore(i,a-b+1,a+1){ valor *= i; }
	fore(i,1,b+1){ valor2 *= i; }
	return valor/valor2;
}

int main () {
	int n,m,k;

	bitset <2510> primo;
	primo.set();
	inicializar(primo);

	map <int,int> mapa;
	map <int,int> :: iterator it;

	while ( cin >> n >> m >> k ){
		if ( n == 0 && m == 0 && k == 0 ) break;

		matrix_d(int) matriz = matrix_i(int,n,m,0);

		lli valores = 0;

		fore(i,0,n){
			int contador = 0;
			fore(j,0,m){
				if ( primo[(m*i)+j] ){
					matriz[i][j] = -1;
				} else {
					matriz[i][j] = (m*i)+j;
					contador++;
				}
			}
			valores += combinacao(contador-1,k-1) + combinacao(contador-1,k);
			//valores += combinacao(contador,k);
		}

		fore(j,0,m){
			int contador = 0;
			fore(i,0,n){
				if (  matriz[i][j] != -1 ) contador++;
			}
			valores += combinacao(contador-1,k-1) + combinacao(contador-1,k);
			//valores += combinacao(contador,k);
		}
		if ( k == 1 ) cout << valores/2 << endl;
		else cout << valores << endl;
	}
}