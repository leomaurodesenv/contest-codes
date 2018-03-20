#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <locale>
#include <set>
#include <algorithm>
#include <vector>
#include <bitset>
#include <map>

#define fore(var, i, f) for(int var=i; var<f; var++)
#define lli long long int
#define N 70000

using namespace std;

int gcd(int a, int b){
    return (b == 0) ? a : gcd(b, a%b);
}

int lcm(int a, int b){
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}


bool reverseF (int i,int j) { return (i<j); }

int main(void){

    int n, t;

    while(cin>>n>>t && (n != 0 || t != 0)){
        vector<int> in;
        int vin;
        bool vr = true;        

        fore(i, 0, n){
            cin>>vin;
            in.push_back(vin);
            vr = (t % vin != 0) ? false : vr;
        }
        if(vr){
            int m = 0;
            bool vr = false;
            vector<int>::iterator it;
            sort(in.begin(), in.end());
            fore(i, 2, t){
                it = find(in.begin(), in.end(), i);
                if(t % i == 0 && it == in.end()){
                    vr = true; m = i; break;
                }
                //cout<<"i:"<<i<<" vr:"<<vr<<endl;
            }
            if(vr) cout<<m<<endl;
            else cout<<"impossivel"<<endl;
        }
        else cout<<"impossivel"<<endl;
    }

    return 0;
}
