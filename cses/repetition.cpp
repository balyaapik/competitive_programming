#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	string seq;
	ll p_A=0,p_G=0,p_T=0,p_C=0;
	ll A=0,G=0,T=0,C=0;

	getline(cin,seq);
	cout<<seq<<"\n";
	for(int i=0;i<seq.length();i++)
	{
		if(seq[i]=='G'){
			G++;
			if(i!=seq.length()){
				if(seq[i+1]!='G'){
					if(p_G<G){
						p_G=G;
						G=0;
					cout<<"p_G "<<p_G<<"\n";
					}
				}
			}
		}
		if(seq[i]=='A'){
			A++;
			if(i!=seq.length()){
				if(seq[i+1]!='A'){
					if(p_A<A){
						p_A=A;
						A=0;
					cout<<"p_A "<<p_A<<"\n";
					}
				}
			}
		}
		if(seq[i]='T'){
			T++;
			if(i!=seq.length()){
				if(seq[i+1]!='T'){
					if(p_T<T){
						p_T=T;
						T=0;
					cout<<"p_T "<<p_T<<"\n";
					}
				}
			}
		}
		if(seq[i]='C'){
			C++;
			if(i!=seq.length()){
				if(seq[i+1]!='C'){
					if(p_C<C){
						p_C=C;
						C=0;
					cout<<"p_C "<<p_C<<"\n";
					}
				}
			}
		}
	}
	cout<<"max"<<max({p_A,p_C,p_G,p_T})<<" ";
	return 0;
}