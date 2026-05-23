#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,k;
int value[1010][1010];
int mx;
int f = -1;
int main(){
	cin>>n>>m>>k;
 	for(int i =1;i<=n;++i){
		for(int j = 1;j<=m;++j){
			cin>>value[i][j];
		}
	}
	while(k--){
	f++;
	mx = -1e9;
	int o,p;
	for(int i =1;i<=n-f;++i){
		for(int j = 1;j<=m-f;++j){
			mx = max(value[i][j],mx);
		}
	}
	for(int i =1;i<=n-f;++i){
		for(int j = 1;j<=m-f;++j){
			if(value[i][j] == mx){
				o = i;
				p = j;
			}
		}
	 }
	 for(int i = o+1;i<=n-f;++i){
	 	for(int j = 1;j<=m-f;++j){
	 		value[i-1][j] = value[i][j];
		 }
	 }
	 for(int j = p+1;j<=m-f;++j){
	 	for(int i = 1;i<=n-f;++i){
	 		value[i][j-1] = value[i][j];
		 }
	 }
	}
	for(int i = 1;i<=n-f-1;++i){
		for(int j = 1;j<=m-f-1;++j){
			if(j == m-f-1){
				cout<<value[i][j];
			}
			else{
			cout<<value[i][j]<<" ";}
		}
		cout<<endl;
	}
	return 0;
}
