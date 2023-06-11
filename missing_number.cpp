#include <iostream>
using namespace std;

int main(void){
	long long n;
	long long sum=0;
	long long num;

	cin>>n;
	//type conversion
	double m=n;
	
	double total_sum=(m/2)*(m+1);

	for (long long i=n-1;i>0;i--){
		cin>>num;
		sum+=num;
	}

	cout<<total_sum-sum<<" ";

	return 0;
}
