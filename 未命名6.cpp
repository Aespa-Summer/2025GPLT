#include<bits/stdc++.h>
using namespace std;
int t,s,tt;
int main(){
    cin>>t>>s>>tt;
    if(s == 1){
        if(tt>=33 && t>=36){
            cout<<"Bu Tie"<<endl;
            cout<<t<<endl;
        }
        else{
        cout<<"Bu Re"<<endl;
            cout<<tt<<endl;
        }
    }
    else{
    if(tt>=33 && t>=36){
            cout<<"Shi Nei"<<endl;
        cout<<t<<endl;
        }
        else{
            cout<<"Shu Shi"<<endl;
            cout<<tt<<endl;
        }
    }
return 0;}
