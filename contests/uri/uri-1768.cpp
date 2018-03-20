// Example program
#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

void arvore(int n);

int main(){
    
    string name;
    int n;
    while (cin >> n){
        arvore(n);
    }
    
}

void arvore(int n){
    int as = 1;
    string word = "*";
    do{
        cout <<setw((n-as)/2+as)<<setfill(' ')<<word<< endl;
        word += "**";
        as += 2;
    } while(as != (n+2));
    
    cout <<setw((n-1)/2+1)<< setfill(' ')<<"*"<<endl
         <<setw((n-3)/2+3)<< setfill(' ')<<"***"<<endl<<endl;
}
