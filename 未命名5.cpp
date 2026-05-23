#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,ans = 1,ans1 = 2;
int main(){
    cin>>n;
    if(n<2) cout<<0<<endl;
    else{
    for(int i =1;i<1000;++i){
        ans*=2;
        ans1*=2;
        if(ans<=n && ans1>n){
            cout<<ans<<endl;
            break;
        }
    }}
    return 0;
}
