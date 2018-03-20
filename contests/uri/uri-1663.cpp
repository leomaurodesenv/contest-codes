// Example program
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std; 

void verifica(vector<int> &vec, int n);

int main(){
    
    string name;
    int n;
    
    cin >> n;
    while(n!=0){
        vector<int> vec (n);
        for(int i=0; i<n; i++) cin >> vec[i];
        verifica(vec, n);
        cin >> n;
    }
    
}

void verifica(vector<int> &vec, int n){
    
    int verif[n];
    for(unsigned int i=0; i<vec.size(); i++){
        verif[vec[i]-1] = i+1;
    }
    
    
    for(int i=0; i<n; i++){
        if(vec[i] != verif[i]){
            cout << "not ambiguous"<<endl;
            return;
        }
    }
    
    cout << "ambiguous"<<endl;
}
