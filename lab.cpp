#include <bits/stdc++.h>
#include <cstdio>
#include <vector>

#include <iostream>
#include <algorithm>
#include <map>
#define long long ll
using namespace std;


int main() {
    int n;cin>>n;
    vector<int>ans(26);
    string s,s1;
    while(cin>>s1){
        s+=s1;
    }
    cout<<s<<
    for(auto i:s){
        if((i>=65 && i<=90) || (i>=97 && i<=122)){
             if(i>=97){
            ans[(i-'a')]++;
        }
        else{
            ans[(i-'A')]++;
        }
        }
       
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
