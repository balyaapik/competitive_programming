#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll size;
	cin>>size;
	ll move=0;
	ll arr[size]={};
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	for(ll i=0;i<size;i++){
		cin>>arr[i];
	}
	for(ll i=1;i<size;i++){
		if(arr[i]<arr[i-1]){
			move+=arr[i-1]-arr[i];
			arr[i]=arr[i-1];
		}
	}
	cout<<move<<" ";
	return 0;
	
}
