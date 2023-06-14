#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
	string seq;
	ll p_A=0,p_G=0,p_T=0,p_C=0;
	ll A=0,G=0,T=0,C=0;

	getline(cin,seq);
	for(int i=0;i<seq.length();i++)
	{
		if(seq[i]=='A')
		{
			A++;
			G=0;
			T=0;
			C=0;
			if(p_A<A){
				p_A=A;
			}
		}
		else if(seq[i]=='G')
		{
			G++;
			A=0;
			T=0;
			C=0;
			if(p_G<G){
				p_G=G;
			}
		}
		else if(seq[i]=='T')
		{
			T++;
			G=0;
			A=0;
			C=0;
			if(p_T<T){
				p_T=T;
			}
		}
		else if(seq[i]=='C')
		{
			C++;
			A=0;
			T=0;
			G=0;
			if(p_C<C){
				p_C=C;
			}
		}
	}
	cout<<max({p_A,p_C,p_G,p_T})<<" ";
	return 0;
}