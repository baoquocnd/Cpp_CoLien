#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        char s; cin>>s;
        if (islower(s)){
            char upper = (char)toupper(s);
            cout << upper << endl;
        } 
        else if (isupper(s)) {
            char lower = (char)tolower(s);
            cout << lower << endl;
        }
    }
}