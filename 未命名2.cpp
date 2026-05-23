#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,f;
int main(){
	cin>>n;
	ll ans = 0;
	int k;
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i*i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  10;
		}
	}
	ans =0;
	if(f == 10){
		for(int i = 1;i<k;++i){
		printf("%d^10+",i);
	}
	printf("%d^10",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  9;
		}
	}
	ans =0;
	if(f == 9){
		for(int i = 1;i<k;++i){
		printf("%d^9+",i);
	}
	printf("%d^9",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  8;
		}
	}
	ans =0;
	if(f == 8){
		for(int i = 1;i<k;++i){
		printf("%d^8+",i);
	}
	printf("%d^8",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  7;
		}
	}
	ans =0;
	if(f == 7){
		for(int i = 1;i<k;++i){
		printf("%d^7+",i);
	}
	printf("%d^7",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  6;
		}
	}
	ans =0;
	if(f == 6){
		for(int i = 1;i<k;++i){
		printf("%d^6+",i);
	}
	printf("%d^6",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i*i;
		if(ans == n){
			k = i;
			f =  5;
		}
	}
	ans =0;
	if(f == 5){
		for(int i = 1;i<k;++i){
		printf("%d^5+",i);
	}
	printf("%d^5",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i*i;
		if(ans == n){
			k = i;
			f =  4;
		}
	}
	ans =0;
	if(f == 4){
		for(int i = 1;i<k;++i){
		printf("%d^4+",i);
	}
	printf("%d^4",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i*i;
		if(ans == n){
			k = i;
			f =  3;
		}
	}
	ans =0;
	if(f == 3){
		for(int i = 1;i<k;++i){
		printf("%d^3+",i);
	}
	printf("%d^3",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i*i;
		if(ans == n){
			k = i;
			f =  2;
		}
	}
	ans =0;
	if(f == 2){
		for(int i = 1;i<k;++i){
		printf("%d^2+",i);
	}
	printf("%d^2",k);
	return 0;}
	for(int i = 1;i<100000;++i){
		ans+=i;
		if(ans == n){
			k = i;
			f =  1;
		}
	}
	ans =0;
	if(f == 1){
	for(int i = 1;i<k;++i){
		printf("%d^1+",i);
	}
	printf("%d^1",k);return 0;}
	printf("Impossible for %lld.",n);
	return 0;
}
