#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
int a[30];
int ans[30];
ll res;
int main(){
    cin>>s;
    for(int i =0;i<26;++i){
        cin>>a[i];
    }
    for(int i =0;i<s.size();++i){
        ans[s[i]-'a']++;
    }
    for(int i =0;i<26;++i){
        res += ans[i]*a[i];
    }
    for(int i =0;i<25;++i){
        cout<<ans[i]<<" ";
    }
    cout<<ans[25]<<endl;
    cout<<res<<endl;
    return 0;
}
