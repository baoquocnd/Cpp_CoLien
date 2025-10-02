#include <bits/stdc++.h>
using namespace std;

bool checkNChuSo(int k, int n){
    string s = to_string(k);
    if (s.size()== n) return 1;
    return 0;
}

bool checkNT(int k){
    for (int i = 2; i <= sqrt(k); i++){
        if (k%i==0) return 0;
    }
    return k>1;
}

bool checkTongNT(int k){
    int sum=0;
    while (k){
        sum+=k%10;
        k/=10;
    }
    return checkNT(sum);
}

bool checkEachNT(int k){
    string s = to_string(k);
    for (int i = 0; i < s.size(); i++){
        if (checkNT(s[i]-'0')==0) return false;
    }
    return true;
}

int main(){
    int k,n;
    cin>>k>>n;
    bool exist = false;
    if (checkNChuSo(k,n) && checkNT(k)&&checkTongNT(k)&&checkEachNT(k)){
        exist = true;
    }
    if (exist) {
        cout<<"Dap ung";
    }
    else {
        cout<<"Ko dap ung";
    }
    return 0;
}