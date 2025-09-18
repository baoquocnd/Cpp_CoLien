#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
    while (b!=0){
        int x = a%b;
        a = b;
        b = x;
    }
    return a;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<ucln(x,y)<<endl;
    cout<<x/ucln(x,y)<<endl;
    cout<<y/ucln(x,y)<<endl;
}