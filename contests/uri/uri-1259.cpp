#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    int n, val;
    cin >> n;
    //cout << n;
    
    vector<int> par, impar;
    
    for(int i = 0; i<n; i++){
        cin >> val;
        if(val % 2 == 0) par.push_back(val);
        else impar.push_back(val);
    }
    
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());
    reverse(impar.begin(), impar.end());
    
    for (vector<int>::iterator it=par.begin(); it!=par.end(); ++it)
        cout<< *it << endl;
    for (vector<int>::iterator it=impar.begin(); it!=impar.end(); ++it)
        cout<< *it << endl;
    
    return 0;
}
