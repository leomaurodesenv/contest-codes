/*
* Problema: 3837 - The Stable Marriage Problem
* https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&category=291&page=show_problem&problem=1838
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
#include <list>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>

#define INF 0x3F3F3F3F
#define PI 3.14159265358979323846
#define EPS 1e-10

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

using namespace std;


int main(){

    // -- Tests
    //file_in("test");

	int cases, n;

	cin>>cases;
	while(cases--){
        cin>>n;
        // Start Variables
        char man[n+1], woman[n+1];
        int cman, cwoman;
        map<char, int> man_map, woman_map;

        cman = cwoman = 0;
        woman[n] = '\0'; man[n] = '\0';
        // -- Reading Names
        for(int i=0; i<(2*n); i++){
            char c;
            scanf(" %c", &c);
            if(islower(c)){
                man[cman] = c;
                man_map[man[cman]] = cman;
                cman++;
            }
            else{
                woman[cwoman] = c;
                woman_map[woman[cwoman]] = cwoman;
                cwoman++;
            }
        }

        // -- Reading Preferences
        int man_pref[n][n], woman_pref[n][n];
        for(int i=0; i<n; i++){
            int idx;
            char who, pref;
            scanf(" %c:", &who);
            idx = man_map[who];
            for(int j=0; j<n; j++){
                scanf(" %c", &pref);
                man_pref[idx][j] = woman_map[pref];
            }
        }
        for(int i=0; i<n; i++){
            int idx;
            char who, pref;
            scanf(" %c:", &who);
            idx = woman_map[who];
            for(int j=0; j<n; j++){
                scanf(" %c", &pref);
                woman_pref[idx][j] = man_map[pref];
            }
        }

        // -- Inverter Pref Woman
        int inverse_pref[n][n];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                inverse_pref[i][woman_pref[i][j]] = j;
            }
        }

        // -- Inicialização
        int wife[n], husband[n], man_count[n];
        queue<int> free;
        for(int i=0; i<n; i++){
            wife[i] = -1; husband[i] = -1;
            man_count[i] = 0;
            free.push(i);
        }

        // -- Casamento estável
        while(!free.empty()){
            int m, w;

            m = free.front(); free.pop();
            w = man_pref[m][man_count[m]]; man_count[m]++;

            if(husband[w] == -1){
                wife[m] = w;
                husband[w] = m;
            }
            else if(inverse_pref[w][m] < inverse_pref[w][husband[w]]){
                free.push(husband[w]);
                wife[husband[w]] = -1;
                wife[m] = w;
                husband[w] = m;
            }
            else
                free.push(m);
        }

        // -- Print out
        for(int i=0; i<n; i++)
            printf("%c %c\n", man[i], woman[wife[i]]);
        if(cases) printf("\n");

	}

    return 0;
}
