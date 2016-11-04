#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long ll;

vector<ll> vec;

int main(){
	ll N;
	cin>>N;
	for(ll i=0;(i-1)*(i-1)<=N;i++){
		if(N%(i+1)==0)vec.push_back(i+1);
	}
	//for(int i=0;i<vec.size();i++)cout<<vec[i]<<endl;
	ll t=1e14;
	for(ll i=0;i<vec.size();i++){
		for(ll j=i;j<vec.size();j++){
			ll k=N/(vec[i]*vec[j]);
				if(vec[i]*vec[j]*k==N){
					ll temp=vec[i]+vec[j]+k;
					t=min(t,temp-3);
				}
			
		}
	}
	//cout <<"t="<<t<<endl;
	t=min(t,N-1);
	cout<<t<<" "<<N-1<<endl;
	return 0;
}