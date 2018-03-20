/*
* Problema: 11827 - Maximum GCD
* https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2927
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

using namespace std;

lli gcd(lli a, lli b){
    return (b == 0) ? a : gcd(b, a%b);
}

int main(){

	string tmp;
	int n;

	cin>>n;
	getchar();

    while(n--){
        getline(cin, tmp);

        vector<int> nums;
        stringstream ss(tmp);
        int ti, t = 0, resp = 0;

        while(ss >> ti){
            nums.push_back(ti);
            t++;
        }

        fore(i, 0, t){
            fore(j, i + 1, t){
                resp = max(resp, (int) gcd(nums[i], nums[j]));
            }
        }

        cout<<resp<<endl;
        //do stuff with nums
    }
    return 0;
}
