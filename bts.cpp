#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() ; i++){
        s[i] = tolower(s[i]);
    }
    string r[100];
    stringstream ss(s);
    string w;
    int k = 0;
    while(ss >> w){
        r[k] = w;
        k++;
    }
    cout<<r[k-1];
    for (int i = 0; i < k-1; i++){
        cout<<r[i][0];
    }
    cout<<"@ptit.edu.vn";
}
