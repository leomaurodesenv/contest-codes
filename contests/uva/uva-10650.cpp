/*
* Problema: 10650 - Determinate Prime
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1591
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

#define file_in(file) freopen(file".in", "r", stdin)
#define file_out(file) freopen(file".out", "w+", stdout)
#define vet_i(var, tipo, lin, col, inic) vector< vector< tipo > > var (lin, vector< tipo > (col, inic))
#define vet_d(tipo) vector< vector< tipo > >
#define lli long long int
#define llu unsigned long long int
#define fore(var, inicio, final) for(int var=inicio; var<final; var++)
#define forec(var, inicio, final, incremento) for(int var=inicio; var<final; incremento)
#define forit(it, var) for( it = var.begin(); it != var.end(); it++ )

#define primes_n 35000

using namespace std;

vector <int> primes;

void crivo_primes(){
    bitset <primes_n> bs;
    bs.set();
    bs[0] = 0;
    bs[1] = 0;

    for(llu i=2; i<primes_n; i++){
        if(bs[i]){
            for(llu j = i*i; j<primes_n; j+=i) bs[j] = 0;
            primes.push_back(i);
        }
    }
}

typedef struct determinate_prime{
    int dist, last, first;
    vector <int> prime;
} determinate_prime;

int main(){

    //file_in("test");
	//file_out("test");

    int x, y;
    int cur, last;

    crivo_primes();

    while(cin>>x>>y && (x != 0 || y != 0)){

        if(x > y) swap(x, y);
        //cout<<"x:"<<x<<" y:"<<y<<endl;

        determinate_prime dp;
        vector <determinate_prime> dps;

        /* Pega próximo primo */
        cur = -1;
        fore(i, 0, primes.size()){
            if(primes[i] >= x){
                if(i > 0) cur = (i-1);
                else cur = 0;
                break;
            }
        }
        fore(i, cur, primes.size()){
            if(primes[i] >= y){ last = i; break; }
        }
        dp.last = primes[cur];
        dp.first = primes[cur];
        dp.dist = -1;
        dp.prime.push_back(primes[cur]);

        if(cur != -1){
            /* Varre procurando os primos determinantes */
            for(int i = (cur+1); i < primes.size() && i <= last; i++){
                if(dp.dist == -1){
                    dp.dist = (primes[i] - dp.last);
                    dp.prime.push_back(primes[i]);
                    dp.last = primes[i];
                }
                else if((primes[i] - dp.last) == dp.dist){
                    dp.prime.push_back(primes[i]);
                    dp.last = primes[i];
                }
                else{
                    /*cout<<"dp.prime.size(): "<<dp.prime.size()<<endl;
                    fore(j, 0, dp.prime.size()) cout<<dp.prime[j]<<" ";
                    cout<<endl;*/
                    if(dp.prime.size() >= 3) dps.push_back(dp);
                    dp.prime.clear();

                    dp.dist = (primes[i] - dp.last);
                    dp.prime.push_back(dp.last);
                    dp.prime.push_back(primes[i]);
                    dp.last = primes[i];
                    dp.first = dp.prime[0];
                }
            }
            if(dp.prime.size() >= 3) dps.push_back(dp);

            /*cout<<"cur:"<<primes[cur]<<endl;
            cout<<"last:"<<primes[last]<<endl;
            cout<<"dps.size:"<<dps.size()<<endl;*/
            fore(i, 0, dps.size()){
                dp = dps[i];
                /*cout<<"dp.last:"<<dp.last<<" <= y:"<<y<<endl;
                cout<<"dp.first:"<<dp.first<<" >= x:"<<x<<endl;*/
                if(dp.last <= y && dp.first >= x){
                    fore(j, 0, dp.prime.size()){
                        if(j != (dp.prime.size()-1)) cout<<dp.prime[j]<<" ";
                        else cout<<dp.prime[j]<<endl;
                    }
                }
            }

        } // Fim - cur != -1


    } // Fim - while (x & y)

    return 0;
}
