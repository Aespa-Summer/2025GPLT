#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull n,a,b;
int main(){
    cin>>n>>a>>b;
    if(n%10 == 0){
         for(ull i = a;i<=b;++i){
            if(i%10 == 0){
                cout<<i<<endl;
            }
        }
    }
    else if(n%5 == 0){
         for(ull i = a;i<=b;++i){
            if(i%5 == 0){
                cout<<i<<endl;
            }
        }
    }
     else if(n%2 == 0){
        for(ull i = a;i<=b;++i){
            if(i%2 == 0){
                cout<<i<<endl;
            }
        }
    }
    else{
         for(ull i = a;i<=b;++i){
            if(i%n == 0){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
