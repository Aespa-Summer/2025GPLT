#include<bits/stdc++.h>
using namespace std;
string s;
int a[110];
bool cmp(int x,int y){
    return a[x]>=a[y];
}
int main(){
    cin>>s;
    for(int i = 0;i<s.size();++i){
        if(s[i] == '('){
            for(int j = i;j<s.size();++j){
                if(s[j]!='(' && s[j]!=')'){
                    a[j]++;
                }
            }
        }
         if(s[i] == ')'){
            for(int j = i;j<s.size();++j){
                if(s[j]!='(' && s[j]!=')'){
                    a[j]--;
                }
            }
        }
    }

    cout<<s[1]<<s[2]<<s[3];
    return 0;
}
