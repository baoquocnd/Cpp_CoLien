#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    map <string, int> mp;
    while (cin>>s){
        mp[s]++;
    }
    for (auto x : mp) cout<<x.first<<" "<<x.second<<endl;
}